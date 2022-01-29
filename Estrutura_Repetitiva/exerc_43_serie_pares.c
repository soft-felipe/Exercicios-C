#include <stdio.h>

int main () {
	
	int n, n1, i = 0;
	
	scanf ("%d %d", &n, &n1); 
	
	if (n % 2 != 0)
		printf ("O PRIMEIRO NUMERO NAO E PAR\n");
	else {
		i = n;
		while (n1--) {
			printf("%d ", i);
			i=i+2;
		}
		printf ("\n");
	}	
		
	return 0;
}
