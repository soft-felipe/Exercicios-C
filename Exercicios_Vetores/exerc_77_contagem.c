#include <stdio.h>
#define max 10000

int main () {
	
	int n, vet[max], k, maior = 0, i;
	
	do {
		scanf("%d", &n); 
	} while (n < 1 || n > 1000);
		
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	} 
	scanf("%d", &k);
	for(i = 0; i < n; i++) {
		if (vet[i] >= k) {
			maior++;
		}
	}
	printf("%d\n", maior);
	
	return 0;
}
