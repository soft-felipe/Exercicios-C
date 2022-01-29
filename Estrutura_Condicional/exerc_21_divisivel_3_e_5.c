#include <stdio.h>

int main() {
	
	int numero;
	
	scanf("%d", &numero);
	
	if ((numero % 3 != 0) || (numero % 5 != 0)) // se o resto da divisao por 3 e 5 nao for 0
		printf("O NUMERO NAO E DIVISIVEL\n");
	else if ((numero % 3 == 0) && (numero % 5 == 0)) { // se o resto da divisao por 3 e 5 for 0
		printf("O NUMERO E DIVISIVEL\n");
	}
			
	return 0;
}
