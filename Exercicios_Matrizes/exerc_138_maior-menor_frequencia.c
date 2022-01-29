#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, m, n, maior = -9999, menor = 9999;
	float porcentagemMaior, porcentagemMenor, aux = 0.0, aux1 = 0.0;
	
	scanf("%d %d", &m, &n);
	
	for (lin = 0; lin < m; lin++) {
		for (col = 0; col < n; col++) {
			scanf("%d", &F[lin][col]);
			
			if (F[lin][col] <= menor) {
				menor = F[lin][col];
			}
			
			if (F[lin][col] >= maior) {
				maior = F[lin][col];
			}
		}
	}
	
	for (lin = 0; lin < m; lin++) {
		for (col = 0; col < n; col ++) {
			
			if (F[lin][col] == menor) {
				aux1++;
			}
			
			if (F[lin][col] == maior) {
				aux++;
			}
		}
	}
	
	porcentagemMaior = (aux / (m * n)) * 100.0; 
	porcentagemMenor = (aux1 / (m * n)) * 100.0;
	
	printf("%d %.2f%%\n", menor, porcentagemMenor);
	printf("%d %.2f%%\n", maior, porcentagemMaior);
	
	return 0;
}
