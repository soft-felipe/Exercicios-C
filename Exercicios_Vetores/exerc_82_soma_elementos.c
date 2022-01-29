#include <stdio.h>
#define max 5000

int main () {
	
	int vet[max], n, i, soma = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", & vet[i]);
		soma += vet[i];
	}
	printf("%d\n", soma);
	
	return 0;
}
