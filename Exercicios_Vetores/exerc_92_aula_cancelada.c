#include <stdio.h>
#define max 1000

int main () {
	
	int vet[max], n, k, i, indice, chegou = 0;
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	
	for (i = 0; i < n; i++) {
		if (vet[i] <= 0) {
			chegou++;
		}
	}
	
	if (chegou < k) {
		printf("SIM\n");
		return 0;
	} else {
		printf("NAO\n");
	}
	
	for (i = n-1; i != -1; i--) {
		if (vet[i] <= 0) {
			indice = i;
			printf("%d\n", indice+1);
		}
	}
		
	return 0;
}
