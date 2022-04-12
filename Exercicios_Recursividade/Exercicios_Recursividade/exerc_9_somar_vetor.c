#include <stdio.h>

int somar(int vetor[], int tamanhoVetor) {
	
	if (tamanhoVetor == 0) {
		return 0;
	} else {
		return vetor[tamanhoVetor - 1] + somar(vetor, tamanhoVetor - 1);
	}
}

int main() {
	
	int nCasos;
	scanf("%d", &nCasos);
	
	int vetor[nCasos], i, j, tamanhoVetor, numeroVetor[30];
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &tamanhoVetor);
		
		for (j = 0; j < tamanhoVetor; j++) {
			scanf("%d", &numeroVetor[j]);
		}
		
		printf("%d\n", somar(numeroVetor, tamanhoVetor));
	}
	
	return 0;
}
