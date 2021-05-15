#
#
#
CC=gcc
CFLAGS=-Wall


all : word_count
.PHONY : all

longest_line : copy.o main.o
	$(CC) $(CFLAGS) -o word_count copy.o main.o
	
copy.o : copy.c
	$(CC) -Wall -c -o copy.o copy.c
	
main.o : main.c
	$(CC) -Wall -c -o main.o main.c
	
.PHONY: clean
clean : rm-rf *.o
