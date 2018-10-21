all: sieve.o main.o
	gcc -o primetest sieve.o main.o -lm

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

main.o: main.c sieve.h
	gcc -c main.c

run:
	./primetest

clean:
	rm *.o
	rm primetest
