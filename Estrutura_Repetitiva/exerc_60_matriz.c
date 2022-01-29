#include <stdio.h>

int main () {
	
	int linhas, colunas, i, j, anterior = 0;
	
	scanf("%d %d", &linhas, &colunas);
	
	for (i = 1; i <= linhas; i++) {
		for (j = 1; j <= colunas; j++) {
			if (i > j) {
				printf ("(%d,%d)", i, j);
				if (j < i - 1 && j < colunas) {
					printf("-");	
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
