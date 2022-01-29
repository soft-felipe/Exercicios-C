#include <stdio.h>
#define max 5000

int main () {
	
	int i, n, vet[max];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	
	for (i = n-1; i != -1; i--) {
		printf("%d ", vet[i]);
	}
	
	return 0;
}
