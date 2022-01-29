#include <stdio.h>

int main () {
	
	int n, A1, B2, i, a1, a2, a3, b1, b2, b3, inverso1, inverso2;
	
	scanf ("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf ("%d %d", &A1, &B2);
		
		a1 = A1 / 100;
		a2 = A1 % 100 / 10;
		a3 = A1 % 100 % 10;
		inverso1 = (a3 * 100) + (a2 * 10) + a1;
		
		b1 = B2 / 100;
		b2 = B2 % 100 / 10;
		b3 = B2 % 100 % 10;
		inverso2 = (b3 * 100) + (b2 * 10) + b1;
		
		if (inverso1 > inverso2) {
			printf ("%d\n", inverso1);
		} else {
			printf ("%d\n", inverso2);
		}
	}
	
	return 0;
}
