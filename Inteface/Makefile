all: Interface

Interface: main.o Interface.o
	g++ main.o Interface.o
	rm -rf *.o

main.o: main.cc
	g++ -c main.cc

Interface.o: Interface.cc
	g++ -c Interface.cc
