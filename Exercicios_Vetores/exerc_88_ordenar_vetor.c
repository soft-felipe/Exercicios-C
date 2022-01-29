#include <stdio.h>
#define max 1000

void troca (int *x, int* y) {
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

void bubble (int v[], int n) {
	int  i,j;
	for (i=n-1; i>0; i--) {
		for (j=0; j<i; j++) {
			if (v[j]>v[j+1]) {
				troca(&v[j], &v[j+1]);
			}
		}
	}
}

int main () {
	
	int vet[max], n, i;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	
	bubble (vet, n);
	
	for (i = 0; i < n; i++) {
		printf("%d\n", vet[i]);
	}
	
	return 0;
}
