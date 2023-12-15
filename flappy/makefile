CC= gcc
CFLAGS= -Wall -std=c99 -c -o

all: main install clean

main: main.o flappy.o pipe.o cmd.o functions.o
	@$(CC) -s -o main main.o flappy.o pipe.o cmd.o functions.o memory.o

main.o: flappy.h pipe.h cmd.h functions.h

flappy.o: memory.o flappy.h pipe.h functions.h

memory.o: memory.h

pipe.o: pipe.h functions.h flappy.h 

cmd.o: cmd.h

functions.o: functions.h

%.o: %.c
	@$(CC) $(CFLAGS) $@ $<

#On cree un dossier bin qui contiendra l'executable
install:
	@mkdir bin
	@cp main bin
	@cd bin && ./main

clean:
	@rm *.o main

cleanbin:
	@rm -r bin