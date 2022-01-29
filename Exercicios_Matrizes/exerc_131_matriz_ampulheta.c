#include <stdio.h>
#define MAX 6

int main () {
	
	int F[MAX][MAX], lin, col, valor, maior = -9999;
	
	for (lin = 0; lin < MAX; lin++) {
		for (col = 0; col < MAX; col++) {
			scanf("%d", &F[lin][col]);
		}
	}
	
	for (lin = 0; lin < MAX-2; lin++) {
		for (col = 0; col < MAX-2; col++) {
			valor = F[lin][col] + F[lin][col+1] + F[lin][col+2] + F[lin+1][col+1] + F[lin+2][col] + F[lin+2][col+1] + F[lin+2][col+2];
			
			if (valor > maior) {
				maior = valor;
			}
		}
	}
	
	printf("%d\n", maior);
	
	return 0;
}
