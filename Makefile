# variables used by implicit rules to allocate ROOT headers and libs
CXXFLAGS = $(shell root-config --cflags)
#shell helps to run shell command
LDLIBS = $(shell root-config --libs)   #LDLIBS->Load library

SRC = $(wildcard *.cc) # list all files that end with .cc
EXE = $(SRC:.cc=)      # remove .cc from those file names
#list of nothing files
all: $(EXE)
	@echo make install: copy $(EXE) to ~/bin
	@echo make clean: delete $(EXE)
	@echo make debug: check contents of Makefile variables

clean:
	rm -rf `cat .gitignore`
	#$(RM) $(EXE)

install:
	mkdir -p ~/bin
	install $(EXE) ~/bin
	@echo Please add $(shell root-config --libdir)
	@echo to your LD_LIBRARY_PATH before you run any executable

debug:
	@echo CXXFLAGS = $(CXXFLAGS)
	@echo LDLIBS = $(LDLIBS)
	@echo SRC = $(SRC)
	@echo EXE = $(EXE)

.PHONY: all clean install debug
