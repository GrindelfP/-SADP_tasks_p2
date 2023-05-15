# SADP_part2 makefile
# INCOMPLETE!

CC=g++
CFLAGS=-c -Wall

all: sadp_p2_t1

sadp_p2_t1: main.o
	$(CC) main.o -o sadp_p2_t1

main.o: runMe.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o sadp_p2_t1