#include<stdio.h>

int main () {
	
	float valor;
	int tempo, intervalo3, horas_avulsas;
	
	scanf("%d", &tempo);
	
	intervalo3 = (tempo / 3);
	horas_avulsas = (tempo % 3);
	valor = (intervalo3 * 10.0) + (horas_avulsas * 5.0);
	
	printf("O VALOR A PAGAR E = %.2f\n", valor);
	
	return 0;
}
