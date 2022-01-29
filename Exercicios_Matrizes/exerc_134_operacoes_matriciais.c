#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], n, lin, col, traco = 0, valor, transposta, resultado;
	
	scanf("%d", &n);
	
	for (lin = 0; lin < n; lin++) {
		for (col = 0; col < n; col++) {
			scanf("%d", &F[lin][col]);
			
			if (lin == col) {
				traco += F[lin][col];
			}
		}
	}
	
	for (lin = 0; lin < n; lin++) {
		printf("\n");
		for (col = 0; col < n; col++) {
			valor = traco * F[lin][col];
			transposta = F[col][lin];
			resultado = valor + transposta;
			printf("%d ", resultado);
		}
	}
	
	return 0;
}
