all: 
	clear
	gcc ./headers/GeradorResultados.h	GeradorResultados.c	./headers/PBN.h	PBN.c  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear
