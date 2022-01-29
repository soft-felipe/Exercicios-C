#include <stdio.h>
#define max 5000

int main () {
	
	int vet[max], i, j, n, cont = 0, qtd = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	
	for (i = 0; i < n; i++) {
		cont = 0;
		for (j = 0; j < n; j++) {
			if (vet[i] != vet[j]) {
				cont++;
			}
		} 
		
		if (cont >= n - 1) {
			qtd++;
		}
	} 
	printf("%d\n", qtd);
	
	return 0;
}
