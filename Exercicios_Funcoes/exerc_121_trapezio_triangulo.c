#include <stdio.h>
#include <math.h>

int E_Triangulo(float a, float b, float c) {
	
	if ((fabs(b - c) < a && a < b +c) && (fabs(a - c) < b && b < a + c) && (fabs(a - b) < c && c < a + b)) {
		return 1;
	} else {
		return 0;
	}
}

float Perimetro(float a, float b, float c) {
	float p_tri;
	p_tri = a + b +c;
	return p_tri;
}

float areaTrapezio(float a, float b, float c) {
	float a_trapezio;
	a_trapezio = (a + b) * c / 2;
	return a_trapezio;
}

int main () {
	
	float a, b, c, p_triangulo, a_trapezio;
	int resultado;
	
	scanf("%f %f %f", &a, &b, &c);
	
	resultado = E_Triangulo (a, b, c);
	
	if (resultado == 1) {
		p_triangulo = Perimetro (a, b, c);
		printf("Perimetro = %.1f\n", p_triangulo);
	} else {
		a_trapezio = areaTrapezio (a, b, c);
		printf("Area = %.1f\n", a_trapezio);
	}
	
	return 0;
}
