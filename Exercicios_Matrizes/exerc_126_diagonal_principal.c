#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, n;
	
	scanf("%d", &n);
	
	for(lin = 0; lin < n; lin++) {
		for(col = 0; col < n; col++) {
			scanf("%d", &F[lin][col]);
			
			if (lin == col) {
				printf("%d\n", F[lin][col]);
			}
		}
	}
	
	return 0;
}
