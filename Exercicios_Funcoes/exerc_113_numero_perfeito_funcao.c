#include <stdio.h>

int somaDivisores (int n) {
	
	int soma = 1, valor, resto, i;
	
	for (i = n - 1; i > 1; i--) {
		
		valor = n / i;
		resto = n % i;
		
		if (resto == 0) {
			printf("+ %d ", valor);
			soma += valor;
		}
	}
	
	return soma;
}

int main () {
	
	int n, resultado;
	scanf("%d", &n);
	
	printf("%d = 1 ", n);
	
	resultado = somaDivisores(n);
	
	if (resultado == n) {
		printf("= %d (NUMERO PERFEITO)\n", resultado);
	} else {
		printf("= %d (NUMERO NAO E PERFEITO)\n", resultado);
	}
	
	return 0;
}
