COMPFLAGS := -Wall -Wextra -DMAP -std=c++11

LDFLAGS := -lboost_regex

OUTFILE := build/lutin

CPP = $(shell ls src/*.cpp src/*/*.cpp)
OBJ = $(subst .cpp,.o,$(CPP))

$(OUTFILE) : $(OBJ)
	@echo ">> Linking $@"
	mkdir -p build
	g++ $(LDFLAGS) -o $@ $^
	
%.o : %.cpp %.h src/symboles/Symbole.h src/Automate.h src/etats/Etat.h
	@echo ">> Compiling $@"
	g++ -c $(COMPFLAGS) -o $@ $<

automate.png : automate.uml
	java -Dfile.encoding=UTF-8 -jar plantuml.jar -Tpng $<

.PHONY: clean
clean:
	@echo ">> Removing all *.o and build"
	rm -rfv $(OBJ) build
