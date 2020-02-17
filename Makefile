CC = gcc
FLAGS = -o

all : horner arithmetic sqrt

sqrt : sqrt.c
	$(CC) $(FLAGS) $@ $< 

artihmetic : arithmetic.c
	$(CC) $(FLAGS) $@ $<

horner : horner.c
	$(CC) $(FLAGS) $@ $<

clean :
	rm -f *~
	rm -f sqrt arithmetic horner

