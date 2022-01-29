#include <stdio.h>
#define MAX 10

int main () {
	
	int F[MAX][MAX], n, m, teste, teste1, lin, col;
	
	do {
		scanf("%d", &teste);
		
		m = teste;
	} while (teste <= 0 || teste > 10);
	
	do {
		scanf("%d", &teste1);
		
		n = teste1;	
	} while (teste1 <= 0 || teste1 > 10);
	
	for (lin = 0; lin < m; lin++) {
		for (col = 0; col < n; col++) {
			scanf("%d", &F[lin][col]);
		}
	}
	
	for (lin = 0; lin < m; lin++) {
		printf("\n");
		printf("linha %d:  ", lin+1);
		for (col = 0; col < n; col++) {
			printf("%d", F[lin][col]);
			if (col < n - 1) {
				printf(",");
			}
		}
	}
	
	return 0;
}
