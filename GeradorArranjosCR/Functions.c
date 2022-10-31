#include "Functions.h"


void CombinationRepetitionUtil(int chosen[], int arr[], int index, int r, int start, int end)
{
	// Como o índice se tornou r, a combinação atual está pronta para ser impressa

	if (index == r)
	{
		for (int i = 0; i < r; i++)
			printf("%d ", arr[chosen[i]]);
		printf("\n");
		return;
	}

	// Um por um, é escolhido todos os elementos (sem considerar o fato de o elemento 
    // já estar escolhido ou não), e se repete até o indice se tornar r

	for (int i = start; i <= end; i++)
	{
		chosen[index] = i;
		CombinationRepetitionUtil(chosen, arr, index + 1, r, i, end);
	}
	return;
}

// A função principal que imprime todas as combinações de tamanho r em arr[] de tamanho n 
// com repetições. Esta função usa principalmente CombinationRepetitionUtil()

void CombinationRepetition(int arr[], int n, int r)
{
	// Alocar memória
	int chosen[r+1];

	// Chamar a função recursiva
	CombinationRepetitionUtil(chosen, arr, 0, r, 0, n-1);
}
