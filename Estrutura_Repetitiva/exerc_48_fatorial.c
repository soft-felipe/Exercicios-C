#include <stdio.h>

int main () {
	
	int n, i, f;
	
	scanf ("%d", &n);
	
	if (n == 0)
		printf ("0! = 1\n");
	else {
		f = 1;
		i = n;
		while (i > 1) {
			f *= i;
			i--;
		}
		printf ("%d! = %d\n", n, f);
	}	
	
	return 0;
}
