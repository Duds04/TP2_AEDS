#include <stdio.h>
#include <stdlib.h>
// #include <stdio_ext.h>
#include <string.h>
#include "./headers/PBN.h"
// #include "./headers/GeradorResultados.h"

int main(){
    printf("\nRodando o programa...\n\n");
    PBN pbn;

    char arquivo[30];
    char caminho[20] = "./entradas/";
    inicializaMatriz(&pbn);


    printf("\nDigite o nome do arquivo (com sua extensao .txt): \n");
    scanf(" %s", arquivo);
    // strcpy(arquivo, "ent2.txt");
    strcat(caminho, arquivo);
    // printf("\n%s\n", caminho);
    
    int tam;
    printf("qual o tamanho da matriz: ");
    scanf("%d", &tam);

    manipulaArquivo(&pbn, caminho);
    imprimiMatriz(&pbn, tam);

    printf("Imprimindo...\n");
    Arranjos(tam, &pbn);
}