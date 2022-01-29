#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, m, n, cont = 0;
	
	scanf("%d %d", &m, &n);
	
	for (lin = 0; lin < m; lin++) {
		printf("\n");
		if (n % 2 == 0 || m == 1 && n == 1) {
			cont++;
		} 
		
		for (col = 0; col < n; col++) {
			cont++;
			if (n % 2 != 0) {
				if (cont % 2 == 0) {
					printf("0");
				} else { 
					printf("1");
				}
			} else {
				if (cont % 2 == 0) {
					printf("1");
				} else { 
					printf("0");
				}
			}
		} 
	}
	
	return 0;
}
