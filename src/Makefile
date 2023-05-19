CC= g++
OBJ= main.o
CPP= main.cpp
all: build execute

build: $(OBJ)
	$(CC) $(CPP) -o e.exe

%.o: %.cpp
	$(CC) %.cpp -c

execute:
	./e.exe

clean:
	rm *.o