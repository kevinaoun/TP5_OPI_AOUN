all : libsalutations.a

libsalutations.a : bonjour.o bonsoir.o bonnenuit.o
	@ar rcs libsalutations.a bonjour.o bonsoir.o bonnenuit.o
	@ranlib libsalutations.a

bonjour.o : bonjour.c
	@gcc -c -o bonjour.o bonjour.c

bonsoir.o : bonsoir.c
	@gcc -c -o bonsoir.o bonsoir.c

bonnenuit.o : bonnenuit.c
	@gcc -c -o bonnenuit.o bonnenuit.c