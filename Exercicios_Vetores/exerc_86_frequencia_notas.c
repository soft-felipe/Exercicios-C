#include <stdio.h>
#define max 10000

int main () {
	
	int vet[max], n, i, maior = 0, indice = 0, cont = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
		if (vet[i] > maior) {
			maior = vet[i];
			indice = i;
		}
	} 
	
	for (i = 0; i < n; i++) {
		if (vet[i] == vet[n-1]) {
			cont++;
		}
	}
	
	printf("Nota %d, %d vezes\n", vet[n-1], cont);
	printf("Nota %d, indice %d\n", maior, indice);	
	
	return 0;
}
