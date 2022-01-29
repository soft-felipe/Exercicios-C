#include <stdio.h>

int main () {
	
	int n, i = 0;
	scanf ("%d", &n);
	
	while (i < n) {
		i = i + 2;
		printf ("%d^2 = %d\n", i, i*i);		
	}
	
	return 0;
}
