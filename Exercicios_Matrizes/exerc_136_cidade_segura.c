#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, n, resultado = 0;
	
	scanf("%d", &n);
	
	for (lin = 0; lin <= n; lin++) {
		for (col = 0; col <= n; col++) {
			scanf("%d", &F[lin][col]);
		}
	}
	
	for (lin = 0; lin < n; lin++) {
		printf("\n");
		for (col = 0; col < n; col++) {
			resultado = F[lin][col] + F[lin][col+1] + F[lin+1][col] + F[lin+1][col+1];
			
			if (resultado > 1) {
				printf("S");
			} else {
				printf("U");
			}
		}
	}
	
	return 0;
}
