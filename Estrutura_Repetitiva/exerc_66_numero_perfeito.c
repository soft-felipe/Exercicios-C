#include <stdio.h>

int main () {
	
	int n, resto, i, soma = 1, valor;
	
	scanf("%d", &n);
	printf("%d = %d ", n, 1);
	
	valor = n / 2;
	for (i = 2; i <= valor; i++) {
		resto = n % i;
		if (resto == 0) {
			printf("+ %d ", i);
			soma += i;
		}
	} 
	
	printf("= %d", soma);
	
	if (soma == n) {
		printf(" (NUMERO PERFEITO)\n");
	} else {
		printf(" (NUMERO NAO E PERFEITO)\n");
	}
	
	return 0;
}
