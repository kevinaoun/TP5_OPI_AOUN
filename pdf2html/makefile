CC= gcc
CFLAGS1= -O3 -Wall -funroll-loops -s -o
CFLAGS2= -O3 -Wall -funroll-loops -c -o
LDLIBS= -lpng

all: pbm2png pbm2eps9 install clean

pbm2png: pbm2png.c
	$(CC) $(CFLAGS1) pbm2png pbm2png.c $(LDLIBS)

pbm2eps9: pbm2eps9.o printer.o
	$(CC) -s -o pbm2eps9 pbm2eps9.o printer.o

pbm2eps9.o: printer.h

%.o: %.c
	$(CC) $(CFLAGS2) $@ $<

install:
	@mkdir bin
	@cp pbm2eps9 pbm2png bin

clean:
	@rm *.o
	@rm pbm2png pbm2eps9

cleanbin:
	@rm -r bin