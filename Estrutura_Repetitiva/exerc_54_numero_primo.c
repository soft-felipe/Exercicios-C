#include <stdio.h>

int main () {
	
	int n, i, cont, resto;
	
	scanf ("%d", &n);
	
	if (n < 0) {
		printf ("Numero invalido!\n");
		return 0;
	} else if (n == 2) {
		printf ("PRIMO\n");
		return 0;
	}
	
	i = 0;
	resto = 0;
	cont = 0;
	while (i < n) {
		i++;
		resto = n % i;
		if (resto == 0)
			cont++;
//	printf ("Resto: %d n: %d i: %d cont: %d\n",resto, n, i, cont);
	}
			
	if (cont == 2)
		printf ("PRIMO\n");
	else 
		printf ("NAO PRIMO\n");	
		
	return 0;	
}
