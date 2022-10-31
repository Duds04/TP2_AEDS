#include "Functions.h"

// O programa em C irá printar todas as possibilidades de arranjos com repetição

int main()
{
    int r, n, i;

    printf("Digite quantas cores estao disponiveis\n>>> ");
    scanf("%d", &n);

    printf("Digite o numero de espacos na arvore\n>>> ");
    scanf("%d", &r);
    printf("\n");

	int arr[n];
    for(i=0; i<n;i++){
        arr[i] = i;
    }
	
	CombinationRepetition(arr, n, r);
	return 0;
}
