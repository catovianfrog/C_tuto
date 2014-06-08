CFLAGS=-Wall -g 

all:	ex19

ex19:	object.o

clean:
	rm -f ex[1-9]
	rm -f ex[1-5][0-9]
	rm -f ex[1-5][0-9][abcdef]
	rm -f *.o


