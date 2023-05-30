CC= g++
OBJ= main.o map.o enums.o thing.o
CPP= main.cpp map.cpp enums.cpp thing.cpp splitmix64.c
all: build execute

build: $(OBJ)
	$(CC) $(CPP) -o e.exe

main.o : main.cpp
	$(CC) main.cpp -c -o main.o

map.o : map.cpp
	$(CC) map.cpp -c -o map.o

enums.o : enums.cpp
	$(CC) enums.cpp -c -o enums.o

thing.o: thing.cpp
	$(CC) thing.cpp -c -o thing.o

splitmix64.o: splitmix64.c
	$(CC) splitmix64.c -c -o splitmix64.o

execute:
	./e.exe

clean:
	rm *.o