COMPFLAGS += -I/opt/local/include
COMPFLAGS += -Wall -Wextra -Werror -std=c++11 -g #-DAUTOMAP -DMAP

LDFLAGS += -L/opt/local/lib
LDFLAGS += -lboost_regex

OUTFILE := build/lutin

CPP = $(shell ls src/*.cpp src/*/*.cpp)
OBJ = $(subst .cpp,.o,$(CPP))

$(OUTFILE) : $(OBJ)
    @echo ">> Édition des liens de $@"
    mkdir -p build
    g++ $(LDFLAGS) -o $@ $^
    
%.o : %.cpp %.h src/symboles/Symbole.h src/Automate.h src/etats/Etat.h
    @echo ">> Compilation de $@"
    g++ -c $(COMPFLAGS) -o $@ $<

automate.png : automate.uml
    java -Dfile.encoding=UTF-8 -jar plantuml.jar -Tpng $<

.PHONY: clean
clean:
    @echo ">> Suppression de tous les *.o et build"
    rm -rfv $(OBJ) build

test : $(OUTFILE)
    ln -fs ../$(OUTFILE) Tests/lut
    cd Tests && ./mktest.sh
