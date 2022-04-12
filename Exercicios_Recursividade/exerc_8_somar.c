#include <stdio.h>

int somar(int numero) {
	
	if (numero == 0) {
		return 0;
	} else {
		return numero + somar(numero-1);
	}
	
}

int main() {
	
	int nCasos;
	scanf("%d", &nCasos);
	
	int vetor[nCasos], i;
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &vetor[i]);
		
		printf("%d\n", somar(vetor[i]));
	}
	
	return 0;
}
