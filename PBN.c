#include "PBN.h"

int manipulaArquivo(PBN *pPBN, char *pTexto, int tamanho)
{
    FILE *arquivo;
    int contLinha = 1;
    char c;
    int valor = -10;
    int i = 0;
    int j = 0;
    int arvore[tamanho][tamanho];

// printf("Entrou\n");

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if(i == j){
                arvore[i][j] = -1;
            }else{
                arvore[i][j] = 0;

            }
            printf("%d ", arvore[i][j]);
        }
        printf("\n");
    }
    


    // printf("Entrou\n");
    if ((arquivo = fopen(pTexto, "r")) != NULL)
    {
        
        // printf("Entrou 2\n");
        while (fscanf(arquivo, "%d%c", &valor, &c) != EOF)
        {
            // printf("\nLetra: ->%c- \nDigito: %d\n", c, valor);

            if(valor != i){
                arvore[i][valor] = 1;
            }

            if (c == '\n')
            {
                i++;
            }
        }
    }else{
        printf("Erro ao abrir o arquivo\n");
    }


    printf("\n%d\n", i);
     for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", arvore[i][j]);
        }
        printf("\n");
    }
}