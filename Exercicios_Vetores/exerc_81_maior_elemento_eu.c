#include <stdio.h>
#define max 10000

int main () {
	
	int n, i, vet[max], maior = 0, maior_i = 0;
	
	n = 1;
	while (n != 0) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		} else {
			maior = 0;
			maior_i = 0;
			for (i = 0; i < n; i++) {
				scanf("%d", &vet[i]);
				if (vet[i] > maior) {
					maior = vet[i];
					maior_i = i;
				}
			}
			printf("%d %d\n", maior_i, maior);
		}
	}
	
	return 0;
}
