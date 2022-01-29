#include <stdio.h>

int separaDigito (int n, int *d1, int *d2, int *d3) {
	
	int invertido;
	
	*d1 = n / 100;
	*d2 = n % 100 / 10;
	*d3 = n % 100 % 10;
	
	invertido = (*d3 * 100) + (*d2 * 10) + *d1;
	
	return invertido;
}

int main () {
	
	int n, resultado, d1, d2, d3;
	scanf("%d", &n);
	
	resultado = separaDigito(n, &d1, &d2, &d3);
	
	printf("%d\n", resultado);
	
	return 0;
}
