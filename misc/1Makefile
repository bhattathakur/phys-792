.PHONY: all clean info
	#This says all and clean are not file
CXXFLAGS=-Wall -02
CXXFLAGS+=$(shell root-config --cflags)
SRC=$(wildcard*.cc)
EXE=$(SRC:.cc=.exe)
all: $(EXE)
 %.exe: %.cc #% mean they are same
	 $(CXX) $(CXXFLAGS) -I /home/liu_lab/shared/include -L /home/liu_lab/shared/lib -lCore -lHist -lMathCore $< -o $@
	 #< matches to the first paramter and @ to the second
info:
	@echo $(SRC)
	@echo $(EXE)
	@eecho $(CXXFLAGS)
clean:
	rm *.exe
# -lGpad helps to draw canvas
