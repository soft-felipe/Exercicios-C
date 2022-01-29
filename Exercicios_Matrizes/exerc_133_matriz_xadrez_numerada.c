#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, m, n, cont = 0, i = 1;
	
	scanf("%d %d", &m, &n);
	
	for (lin = 0; lin < m; lin++) {
		printf("\n");
		
		if (n % 2 == 0 || m == 1 && n == 1) {
			cont ++;
		}
		 
		for (col = 0; col < n; col++) {
			cont++;
			if (n % 2 != 0) {
				if (cont % 2 == 0) {
					printf("%d ", i);
					i++;
				} else {
					printf("0 ");
				}
			} else {
				if (cont % 2 == 0) {
					printf("0 ");
				} else {
					printf("%d ", i);
					i++;
				}
			}
		}
	}
	
	return 0;
}
