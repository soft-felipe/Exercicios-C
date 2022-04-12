#include <stdio.h>

int log(int numero, int cont) {
	
	if (numero == 1) {
		return cont;
	} else {
		return log(numero / 2, cont+1);
	}
}

int main() {
	
	int nCasos, numero, i;
	
	scanf("%d", &nCasos);
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &numero);
		
		printf("%d\n", log(numero, 0));
	}
	
	return 0;
}
