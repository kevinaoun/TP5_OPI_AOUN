all : makeLIB makeSRC exe #clean

makeLIB : #lib/makefile
	@$(MAKE) -C lib	
# equivalent a "cd lib && make"

makeSRC : #src/makefile
	@$(MAKE) -C src	
# equivalent a "cd src && make"

exe :
	@./src/salut

clean :
	@rm -rf src/salut
	@cd src && rm *.o
	@cd lib && rm *.o
##	Le 'clean' supprime l'executable et les '.o'. 
##	On peut l'appeler avec "make clean" mais il n'est pas necessaire.