#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, maior = -9999, menor = 9999, menorLin, menorCol, maiorLin, maiorCol;
	int m, n;
	
	scanf("%d %d", &m, &n);
	
	for (lin = 0; lin < m; lin++) {
		for (col = 0; col < n; col++) {
			scanf("%d", &F[lin][col]);
			
			if (F[lin][col] > maior) {
				maior = F[lin][col];
				maiorLin = lin;
				maiorCol = col;
			}
			
			if (F[lin][col] < menor) {
				menor = F[lin][col];
				menorLin = lin;
				menorCol = col;
			}
		}
	}
	
	for (lin = 0; lin < m; lin++) {
		printf("\n");
		for (col = 0; col < n; col++) {
			
			if (lin == maiorLin && col == maiorCol) {
				F[lin][col] = menor;
			}
			
			if (lin == menorLin && col == menorCol) {
				F[lin][col] = maior;
			}
			
			printf("%d ", F[lin][col]);
		}
	}
	
	return 0;
}
