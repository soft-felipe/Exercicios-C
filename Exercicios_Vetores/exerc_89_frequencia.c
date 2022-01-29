#include <stdio.h>
#define max 100000

int main () {
	
	int vet[max], vet2[max], j, i, n, numero = 0, cont = 0, maior = 0, valor = 99999;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	
	for (i = 0; i < n; i++) {
		cont = 0;
		for (j = 0; j < n; j++) {
			if (vet[i] == vet[j]) {
				cont++;
			}
		}
		
		if (cont > maior) {
			maior = cont;
			valor = vet[i];
		} else if (cont == maior && vet[i] < valor) {
			maior = cont;
			valor = vet[i];
		} 
	} 
	printf("%d\n%d\n", valor, maior);
	
	return 0;
}

