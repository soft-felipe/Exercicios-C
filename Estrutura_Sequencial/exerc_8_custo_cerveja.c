#include<stdio.h>

int main() {
	
	float r, h, at, ac, al, v;
	
	scanf("%f", &r);
	scanf("%f", &h);
	
	ac = 3.14159 * r * r;
	al = 2*3.14159 * r * h;
	at = 2 * ac + al;
	v = at * 100.0;
	
	printf("O VALOR DO CUSTO E = %.2f\n", v);
	
	return 0;	
}
