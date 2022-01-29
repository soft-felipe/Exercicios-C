#include <stdio.h>
#include <math.h>

int raizesEq2Grau (int a, int b, int c, float *x1, float *x2) {
	
	int delta;
	
	delta = (b * b - 4 * a * c);
	
	if (delta > 0) {
		*x1 = (-b + sqrt(delta)) / (2 * a);
		*x2 = (-b - sqrt(delta)) / (2 * a);
		return 2;
	} else if (delta == 0) {
		*x1 = (-b) / (2 * a);
		return 1;
	} else {
		return 0;
	}
}

int main () {
	
	int a, b, c, resultado;
	float x1, x2;
	
	scanf("%d %d %d", &a, &b, &c);
	
	resultado = raizesEq2Grau (a, b, c, &x1, &x2);
	
	if (resultado == 2) {
		printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
	} else if (resultado == 1) {
		printf("RAIZ UNICA\nX1 = %.2f\n", x1);
	} else {
		printf("RAIZES IMAGINARIAS\n");
	}
	
	return 0;
}
