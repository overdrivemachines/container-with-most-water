
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

container-with-most-water: container-with-most-water.o
	$(CC) $(CFLAGS) -o container-with-most-water container-with-most-water.o

container-with-most-water.o: container-with-most-water.cpp
	$(CC) $(CFLAGS) -c container-with-most-water.cpp

clean:
	rm -rf container-with-most-water container-with-most-water.o
