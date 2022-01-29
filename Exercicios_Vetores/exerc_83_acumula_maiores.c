#include <stdio.h>
#define max 10000

int main () {
	
	int vet[max], n, i, maior = 0, menor = 0, qtd = 0;
	
	do {
		scanf("%d", &n);
		if (n == 0) {
			break;
		} 
	
		menor = 0;
		maior = 0;
		 
		for (i = 0; i < n; i++) {
			scanf("%d", &vet[i]);
			
			if (vet[i] > maior) {
				maior = vet[i];
			}
		}
		 
		while (menor <= maior) {
			printf("(%d) ", menor);
			
			qtd = 0;
			for (i = 0; i < n; i++) {
				if (vet[i] <= menor) {
					qtd++;
				}
			} 
			printf("%d\n", qtd);
			
			menor++;
		} 
	} while (n != 0);
	
	return 0;
}
