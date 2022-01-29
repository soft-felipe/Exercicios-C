#include <stdio.h>
#define max 1000

int main () {
	
	int vet[max], n, i, maior = 0, menor = 9999;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
		printf("%d ", vet[i]);
	} 
	printf("\n");
	
	for (i = n-1; i != -1; i--) {
		printf("%d ", vet[i]);
	}
	printf("\n");
	
	for (i = 0; i < n; i++) {
		if (vet[i] > maior) {
			maior = vet[i];
		} if (vet[i] < menor) {
			menor = vet[i];
		}
	}
	printf("%d\n%d\n", maior, menor);
	
	return 0;
}
