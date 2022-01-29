#include <stdio.h>

int main () {
	
	float n, i, K, s, soma, sub, mul, div, inc, copia;
	
	scanf ("%f %f %f %f", &n, &i, &K, &s);
	
	inc = i;
	copia = K;
	printf("Tabuada de soma:\n");
	while (copia--) {
		soma = n + inc;
		printf("%.2f + %.2f = %.2f\n", n, inc, soma);
		inc += s;
	}
	
	inc = i;
	copia = K;
	printf("Tabuada de subtracao:\n");
	while (copia--) {
		sub = n - inc;
		printf("%.2f - %.2f = %.2f\n", n, inc, sub);
		inc += s;
	}
	
	inc = i;
	copia = K;
	printf("Tabuada de multiplicacao:\n");
	while (copia--) {
		mul = n * inc;	
		printf("%.2f x %.2f = %.2f\n", n, inc, mul);
		inc += s;
	}
	
	inc = i;
	copia = K;
	printf("Tabuada de divisao:\n");
	while (copia--) {
		div = n / inc;
		printf("%.2f / %.2f = %.2f\n", n, inc, div);
		inc += s;
	}
	
	
	return 0;
}
