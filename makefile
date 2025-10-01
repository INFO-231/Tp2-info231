CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: main

main: main.o fonction_listes.o
	$(CC) $(CFLAGS) -o main main.o fonction_listes.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

fonction_listes.o: fonction_listes.c
	$(CC) $(CFLAGS) -c fonction_listes.c

clean:
	rm -f *.o main
