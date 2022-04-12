#include <stdio.h>
#define MAX 100

int proximoElemento(int vetor[], int tamanhoVetor, int i) {
	
	if (i == tamanhoVetor-1) {
		return 0;
	} else {
		if (vetor[i] * 10 == vetor[i+1]) {
			return 1;
		} else {
			proximoElemento(vetor, tamanhoVetor, i+1);
		}
	}
}

int main() {
	
	int nCasos, tamanhoVetor, i, j, vetor[MAX];
	
	scanf("%d", &nCasos);
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &tamanhoVetor);
		
		for (j = 0; j < tamanhoVetor; j++) {
			scanf("%d", &vetor[j]);
		}
		
		if (proximoElemento(vetor, tamanhoVetor, 0) == 1) {
			printf("VERDADEIRO\n");
		} else {
			printf("FALSO\n");
		}
	}
	
	return 0;
}
