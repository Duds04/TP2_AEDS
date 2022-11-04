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

int imprimiMatriz(PBN *pPBN, int tam){
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d ", pPBN->matriz[i][j]);
        }
        printf("\n");
    }
    return 1;
}

char *vetor[] = {"0",  "1", NULL} ;

int Arranjos(int espacos, PBN* pPBN){
    /* vetor de cada permutacao. */
    int *num ;
    /* quantidade de elementos do vetor. */
    int n=2 ;
    /* tamanho de cada permutacao. */
    int r = espacos;
    /* controle de loop. */
    int i, j, Erro, atual;
    
    /* Aloca espaco para o vetor num. Lembre-se
     * que o vetor `num' representa um numero
     * na base n com r algarismos. */
    num = (int *)calloc(r+1, sizeof(int)) ;
    if ( num == NULL ) {
        printf("erro malloc") ;
        return -1;
    }

    int cont = 1;
    /* Inicio do algoritmo. */
    while ( num[r] == 0 ) {
        for(i=0; i < n; i++) {
            /* Mostra a permutacao na tela. */
            Erro = 0;
            for (atual=0; atual < r; atual++)
                for(j=0; j < r; j++) {
                    if (pPBN->matriz[atual][j] == 1)
                        if (num[atual] == num[j] && i != j){
                            Erro = 1;
                        }
                    
                }

                if (Erro)
                    printf("%d- Invalida ", cont);

                else
                    printf("%d- Obigado, ncontramos a saida valida: ", cont);

                cont++;
                for(j=0; j < r; j++)
                    printf("%s ", vetor[num[j]]) ;
                
                putchar('\n') ;

                
                /* incrementa o algarismo menos
                * significativo. */
                num[0]++ ;
                
        }
        
 
        /* distribui os vai-uns. */
        for(i=0; i < r; i++) {
            if(num[i] == n) {
                num[i] = 0;
                num[i+1]++ ;
            }
        }
    }
 
    free(num) ;
 
    return 0;
}
