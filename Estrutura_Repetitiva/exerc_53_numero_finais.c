#include <stdio.h>

int main () {
	
	int n, k = 0, i, j;
	scanf ("%d", &n);
	
	if (n < 2)
		printf ("Campeonato invalido!\n");
	else {
		for (i = 1; i < n; i++)
			for (j = i + 1; j <= n; j++) {
				k++;
				printf ("Final %d: Time%d X Time%d\n", k, i, j);
			}
	}
	
	return 0;
}
