all: 
	gcc ./headers/PBN.h	PBN.c  main.c	-o	exec
	clear
clean:
	rm -rf *.o ./exec
	clear
