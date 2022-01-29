#include <stdio.h>

int digit_count (long int n) {
	
	long int cont = 0;
	
	while (n != 0) {
		n = n / 10;
		cont++;
	}
	
	return cont;
}

int main () {
	
	long int n, resultado;
	
	scanf("%ld", &n);
	
	resultado = digit_count (n);
	
	printf("Numero de digitos: %ld\n", resultado);
	
	return 0;
}
