#include <stdio.h>

int main () {
	
	int mes = 0, n, k = 1;
	double inv, juros, total = 0, renda = 0, potencia = 1; 
	
	scanf ("%lf %lf %d", &inv, &juros, &n);
	
	while (mes < n) {
		k = 1;
		potencia = 1;
		while (k <= mes + 1) {
			potencia *= (1 + juros);
			k++;
		}
		
		total = inv * potencia;
		renda = total - inv;
		mes ++; 
		printf ("a*(1+r)^%d = %.2f, renda: %.2f\n", mes, total, renda);
	}
	
	return 0;
}
