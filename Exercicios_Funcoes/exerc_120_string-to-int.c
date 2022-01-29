#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int string2int (const char *str) {
	
	long int valor;
	
	valor = atol(str);
	
	return valor;
}

int main () {
	
	char str[129];
	long int resultado;
	
	while (scanf("%s", str) != EOF) {
		
		resultado = string2int(str);
		printf("%ld %ld\n", resultado, resultado*2);
	}
	
	return 0;
}
