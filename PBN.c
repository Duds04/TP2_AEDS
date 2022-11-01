#include "./headers/PBN.h"

int manipulaArquivo(PBN *pPBN, char *pTexto)
{
    FILE *arquivo;
    char c;
    int valor = -10;
    int i = 0;

    if ((arquivo = fopen(pTexto, "r")) != NULL)
    {
        
        while (fscanf(arquivo, "%d%c", &valor, &c) != EOF)
        {
            if(valor != i){
                pPBN->matriz[i][valor] = 1;
            }

            if (c == '\n')
            {
                i++;
            }
        }
    }else{
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    fclose(arquivo);
    return 1;
}

int inicializaMatriz(PBN *pPBN){
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if(i == j){
                pPBN->matriz[i][j] = -1;
            }else{
                pPBN->matriz[i][j] = 0;

            }
        }
    }
    return 1;
}

int comparaArranjos(PBN *pPBN){
    return 1; // execultou sem erros
}

int imprimiMatriz(PBN *pPBN){
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", pPBN->matriz[i][j]);
        }
        printf("\n");
    }
    return 1;
}

