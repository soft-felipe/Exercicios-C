#include <stdio.h>

double le_numero() {
	double numero;
	scanf("%lf", &numero);
	return numero;
}

int main () {
	
	double media, acumula;
	int casos, i;
	scanf("%d", &casos);
	
	for(i = 0; i < casos; i++) {
		acumula += le_numero();
	}
	
	media = acumula / casos;
	
	printf("%.2lf\n", media);
	
	return 0;
}
