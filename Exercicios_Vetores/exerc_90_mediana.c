#include <stdio.h>
#define max 10000

void troca (long int *x, long int* y) {
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

void bubble (long int v[], int n) {
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
	
	int i, n;
	long int vet[max];
	float med;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%ld", &vet[i]);
	}
	
	bubble(vet, n);
	
	if (n % 2 == 0) {
		med = (vet[n / 2] + vet[(n / 2) - 1]) / 2.0;
	} else {
		med = (vet[n / 2]) * 1.0;
	} 
	printf("%.2f\n", med);
	
	return 0;
}
