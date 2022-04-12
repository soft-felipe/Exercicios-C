#include <stdio.h>

int ocorrencias(int numero, int contador) {
	
	if (numero == 0) {
		printf("%d\n", contador);
		return 0;
	} else {
		if (numero % 10 == 5) {
			ocorrencias(numero/10, contador+1);
		} else {
			ocorrencias(numero/10, contador);
		}
	}
}

int main() {
	
	int nCasos;
	scanf("%d", &nCasos);
	
	int vetor[nCasos], i;
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &vetor[i]);
		ocorrencias(vetor[i], 0);
	}
	
	return 0;
}
