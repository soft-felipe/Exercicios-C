#include <stdio.h>

int main () {
	
	int A[2][2], lin, col;
	float det;
	
	for (lin = 0; lin < 2; lin++) {
		for (col = 0; col < 2; col++) {
			scanf("%d", &A[lin][col]);
		}
	}
	
	det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
	
	printf("%.2f\n", det);
	
	return 0;
}
