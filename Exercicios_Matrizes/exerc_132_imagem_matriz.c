#include <stdio.h>
#define MAX 100

int main () {
	
	int F[MAX][MAX], lin, col, m, n, borda, valorBorda;
	scanf("%d %d %d %d", &m, &n, &borda, &valorBorda);
	
	printf("p2\n%d %d\n255", m, n);
	
	for (lin = 0; lin < m; lin++) {
		printf("\n");
		for (col = 0; col < n; col++) {
			if (lin + 1 <= borda || m - lin <= borda || col + 1 <= borda || n - col <= borda) {
				printf("%d", valorBorda);
			} else {
				printf("0");
			}		
		}
	}
	
	return 0;
}
