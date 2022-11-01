#include <stdio.h>
#include <string.h>

// o tamanho vai ser definido pelo proprio desenvolvedor com base no arquivo teste que ira ser testado
#define tamanho 40 


typedef struct 
{
    int matriz[tamanho][tamanho];
}PBN;

int inicializaMatriz(PBN *pPBN);
int manipulaArquivo(PBN *pPBN, char *pTexto);
int comparaArranjos(PBN *pPBN);
int imprimiMatriz(PBN *pPBN);