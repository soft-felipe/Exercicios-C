#include <stdio.h>

int potencia(int base, int expoente) {
	
	if (expoente == 0) {
		return 1;
	} else {
		return base * potencia(base, expoente-1);
	}
}

int main() {
	
	int nCasos, i, base, expoente;
	
	scanf("%d", &nCasos);
	
	for(i = 0; i < nCasos; i++) {
		scanf("%d %d", &base, &expoente);
		
		printf("%d\n", potencia(base, expoente));
	}
	
	return 0;
}
