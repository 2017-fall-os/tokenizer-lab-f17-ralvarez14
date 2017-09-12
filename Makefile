run: mainToken.o implementation.o
	cc mainToken.o implementation.o -o run

mainToken.o: mainToken.c
	cc -c mainToken.c

implementation.o: implementation.c
	cc -c implementation.c

clean:
	rm -f *.o out
