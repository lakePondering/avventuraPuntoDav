CC= g++
OBJ= constants.o creature.o main.o map.o thing.o
CPP= constants.cpp creature.cpp main.cpp map.cpp thing.cpp
all: build execute

build: $(OBJ)
	$(CC) $(CPP) -o e.exe

main.o : main.cpp
	$(CC) main.cpp -c -o main.o

constants.o : constants.cpp
	$(CC) constants.cpp -c -o constants.o
	
creature.o : creature.cpp
	$(CC) creature.cpp -c -o creature.o

map.o : map.cpp
	$(CC) map.cpp -c -o map.o

thing.o : thing.cpp
	$(CC) thing.cpp -c -o thing.o

execute:
	./e.exe

clean:
	rm *.o