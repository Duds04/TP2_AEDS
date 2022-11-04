all: 
	clear
	gcc ./headers/PBN.h	PBN.c  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear
