#include <stdio.h>
#define max 1000

int main () {
	
	int t, n, vet[max], i, j, cont = 0, menor = 9999, dif;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		for (i = 0; i < n; i++) {
			scanf("%d", &vet[i]);
		}
		
		menor = 9999;
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i != j) {
					dif = vet[i] - vet[j];
					
					if (dif < 0) {
						dif = -dif;
					}
					
					if (dif < menor) {
						menor = dif;
					}
				}
			}
		}
		printf("%d %d\n", menor, n*n);
	}
	
	return 0;
}
