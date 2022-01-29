#include <stdio.h>
#include <math.h>

int next_power (int n, int p) {
	
	int valor = 0, final = 0, i, dif, menor = 9999;
	
	for(i = 1; valor <= n; i++) {
		valor = pow(i, p);
		dif = n - valor;
		if (fabs(dif) < menor) {
			menor = dif;
			final = valor;
		}
	}
	
	return final;
}

int main () {
	
	int n, p, resultado;
	int base;
	scanf("%d %d", &n, &p);
	
	resultado = next_power(n, p);
	base = pow(resultado, 1.0/p);
	
	printf("%d -> %d ^ %d = %d\n", n, base, p, resultado);
	
	return 0;
}
