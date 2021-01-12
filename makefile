help:
	@echo Targets: all compile testAdd testMult clean 
all: compile test clean

compile: val.o
	gcc -o val val.o

testMult:
	./val -m 3 4 56 78
	
testAdd:
	./val 3 4 56 78
	
clean:
	rm val val.o