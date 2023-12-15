all : salut

salut : heure.o salut.o
	@gcc -o salut salut.o heure.o -L../lib -lsalutations

salut.o : salut.c
	@gcc -o salut.o -c salut.c -I../lib

heure.o : heure.c
	@gcc -o heure.o -c heure.c