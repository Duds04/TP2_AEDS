#include "Functions.h"

char *vetor[] = {"0",  "1", NULL} ;

int Arranjos(int espacos){
    /* vetor de cada permutacao. */
    int *num ;
    /* quantidade de elementos do vetor. */
    int n=2 ;
    /* tamanho de cada permutacao. */
    int r = espacos;
    /* controle de loop. */
    int i, j ;
    
    /* Aloca espaco para o vetor num. Lembre-se
     * que o vetor `num' representa um numero
     * na base n com r algarismos. */
    num = (int *)calloc(r+1, sizeof(int)) ;
    if ( num == NULL ) {
        printf("erro malloc") ;
        return -1;
    }
 
    /* Inicio do algoritmo. */
    while ( num[r] == 0 ) {
        for(i=0; i < n; i++) {
            /* Mostra a permutacao na tela. */
            for(j=0; j < r; j++) {
                printf("%s ", vetor[num[j]]) ;
            }
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
