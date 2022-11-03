#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>
#include <string.h>
#include "./headers/PBN.h"
#include "./headers/GeradorResultados.h"

int main(){
    printf("\nRodando o programa...\n\n");
    PBN pbn;

    char arquivo[30];
    char caminho[20] = "./entradas/";
    inicializaMatriz(&pbn);


    // printf("\nDigite o nome do arquivo (com sua extensao .txt): \n");
    // scanf(" %s", arquivo);
    strcpy(arquivo, "entrada_I.txt");
    strcat(caminho, arquivo);
    // printf("\n%s\n", caminho);


    manipulaArquivo(&pbn, caminho);
    imprimiMatriz(&pbn);

    printf("\n");
    Arranjos(10, &pbn);
    // printf("Imprimindo...\n");
}