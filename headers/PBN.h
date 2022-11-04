#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// o tamanho vai ser definido pelo proprio desenvolvedor com base no arquivo teste que ira ser testado
#define tamanho 10 


typedef struct 
{
    int matriz[tamanho][tamanho];
}PBN;

int inicializaMatriz(PBN *pPBN);
int manipulaArquivo(PBN *pPBN, char *pTexto);
int imprimiMatriz(PBN *pPBN);
int Arranjos(PBN* pPBN); // cria arranjos e compara eles
