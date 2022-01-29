#include <stdio.h>
#define max 5000

int main () {
	
	int n, i, vet[max];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
		printf("%d ", vet[i]);
	}
	
	return 0;
}
