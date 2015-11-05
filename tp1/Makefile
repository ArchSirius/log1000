all: ctimest

ctimest: main.o btimest.o
	g++ -o ctimest main.o btimest.o

main.o: main.cpp btimest.o
	g++ -o main.o btimest.o -c main.cpp

btimest.o: btimest.cpp
	g++ -o btimest.o -c btimest.cpp

clean:
	rm -rf *.o ctimest
