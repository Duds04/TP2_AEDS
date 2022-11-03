#include "./headers/GeradorResultados.h"

int Guarda(int* indices, int *num, int espacos){

    int j, cont = 1;

    for(j=0; j < espacos; j++) {

        if (num[j] == -1)
           indices[0] = j;

        if (num[j] == 1){
            indices[cont] = j;
            cont ++;
        }
        printf("%d ", num[j]) ;
                
    }
    putchar('\n') ;
    return cont;

}

int Compara(PBN *pPBN, int* indices, int cont, int linha){ // se return = 0 entao é valido

    int j;

    for (j = 1; j < cont; j++){
        if (pPBN->matriz[linha][indices[0]] == pPBN->matriz[linha][indices[j]])
            return 1;
    }

    return 0;

}

int Arranjos(int espacos, PBN *pPBN){
    /* vetor de cada permutacao. */
    int *num ;
    /* quantidade de elementos do vetor. */
    int n=2 ;
    /* tamanho de cada permutacao. */
    int r = espacos;
    /* controle de loop. */
    int i;
    /* vetor dos idices adjacente */

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
            int* indices[5];
            /* Mostra a permutacao na tela. */
            if (Compara(pPBN, indices, Guarda(indices, &num, r), i)){
                printf("Linha Invalido\n");
                break;
            }
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
