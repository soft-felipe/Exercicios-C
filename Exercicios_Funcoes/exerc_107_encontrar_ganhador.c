#include <stdio.h>

int encontrar_ganhador (int n) {
	int i, vet[1000], ganhador;
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
		
		if (i + 1 == vet[i]) {
			ganhador = vet[i];
		}
	}
	
	return ganhador;
}

int main () {
	
	int n, cont = 0, quem_foi;
	
	n = 1;
	while (n != 0) {
		scanf("%d", &n);
		
		if (n == 0) {
			break;
		}
			
		quem_foi = encontrar_ganhador(n);
		cont++;
		printf("Teste %d\n%d\n", cont, quem_foi);
	}
	
	return 0;
}
