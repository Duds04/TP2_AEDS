#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./headers/PBN.h"

int main(){
    printf("\nRodando o programa...\n\n");
    PBN pbn;

    char arquivo[30];
    char caminho[20] = "./entradas/";
    inicializaMatriz(&pbn);

    printf("\nDigite o nome do arquivo (com sua extensao .txt): \n");
    scanf(" %s", arquivo);
    strcat(caminho, arquivo);
    printf("\n%s\n", caminho);

    manipulaArquivo(&pbn, caminho);
    imprimiMatriz(&pbn);

    printf("Imprimindo...\n");
    Arranjos(&pbn);
    printf("\nQuantidade de entradas: %d\n\n", tamanho);
}