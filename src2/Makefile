CC= g++
OBJ= main.o map.o enums.o
CPP= main.cpp map.cpp enums.cpp
all: build execute

build: $(OBJ)
	$(CC) $(CPP) -o e.exe

main.o : main.cpp
	$(CC) main.cpp -c -o main.o

map.o : map.cpp
	$(CC) map.cpp -c -o map.o

enums.o : enums.cpp
	$(CC) enums.cpp -c -o enums.o

execute:
	./e.exe

clean:
	rm *.o