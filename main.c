#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "PBN.h"

int main(){
    PBN pbn;

    int tamanho;
    char arquivo[30];
    char caminho[20] = "./entradas/";
    printf("\nDigite o tamanho da matriz:\n");
    scanf("%d", &tamanho);
    // printf("\nDigite o nome do arquivo (com sua extensao .txt): \n");
    // scanf(" %s", arquivo);
    strcpy(arquivo, "ent1.txt");
    strcat(caminho, arquivo);
    
    printf("%s\n", caminho);
    manipulaArquivo(&pbn, caminho, tamanho);


//entrada_I.txt
}