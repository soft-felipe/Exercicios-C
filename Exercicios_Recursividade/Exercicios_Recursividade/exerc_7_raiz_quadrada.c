#include <stdio.h>
#include <math.h>

double raizQuadrada(double numero, double y, double erro) {
	
	if (fabs(pow(y, 2) - numero) < erro) {
		return y;
	} else {
		return raizQuadrada(numero, (numero / y + y) / 2, erro);
	}
}

int main() {
	
	double numero, erro;
	scanf("%lf %lf", &numero, &erro);
	
	printf("%.6lf\n", raizQuadrada(numero, numero/2, erro));
	
	return 0;
}
