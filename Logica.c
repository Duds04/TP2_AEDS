#include "./headers/PBN.h"

int Lociga(PBN* pPBN, int tam){ // retorna 0 se n tiver nada errado
    for (int i; i < tam; i++){
        for (int j; j < tam; i++){

            if (i == tam-1 && j == tam-1)
                return 0;

            if (i == tam-1)
                if (pPBN->matriz[i][j] == pPBN->matriz[i][j+1])
                        return 1;

            if (j == tam-1)
                if (pPBN->matriz[i][j] == pPBN->matriz[i+1][j])
                    return 1;
                
        } 
    }
}
