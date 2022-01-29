#include <stdio.h>
#define max 1000

int main () {
	
	int n, vet[max], i, par = 0, qtd = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	
	for (i = 0; i < n; i++) {
		par = vet[i] % 2;
		if (par == 0) {
			qtd++;
			printf("%d ", vet[i]);
		}
	}
	printf("%d\n", qtd);
	
	return 0;
}
