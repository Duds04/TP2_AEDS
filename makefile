all: 
	clear
	gcc  ./headers/PBN.h 	PBN.c  ./headers/GeradorResultados.h 	GeradorResultados.c	  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear
