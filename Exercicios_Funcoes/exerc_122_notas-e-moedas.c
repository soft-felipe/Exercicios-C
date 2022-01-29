#include <stdio.h>

void converteEmNotasMoedas (int valor, int *notas_cem, int *notas_cinq, int *notas_dez, int *moedas) {
		
	*notas_cem = valor / 100;
	*notas_cinq = valor % 100 / 50;
	*notas_dez = valor % 100 % 50 / 10;
	*moedas = valor % 100 % 50 % 10;
	
	printf("NOTAS DE 100 = %d\n", *notas_cem);
	printf("NOTAS DE 50 = %d\n", *notas_cinq);
	printf("NOTAS DE 10 = %d\n", *notas_dez);
	printf("MOEDAS DE 1 = %d\n", *moedas);
	
}

int main () {
	
	int valor, n_cem, n_cinq, n_dez, moedas;
	
	scanf("%d", &valor);
	
	converteEmNotasMoedas (valor, &n_cem, &n_cinq, &n_dez, &moedas);
	
	return 0;
}
