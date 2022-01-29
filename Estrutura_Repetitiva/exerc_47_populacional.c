#include <stdio.h>

int main () {
	
	int a, b, anos;
	
	scanf ("%d %d", &a, &b);
	
	anos = 0; // inicialização de variável 
	while (a < b) {
		a *= 1.03; // pegando o todo mais 3%
		b *= 1.015; // pegando o todo mais 1,5%
		anos++;
	}
	printf ("ANOS = %d\n", anos);
	
	return 0;
}
