#include<stdio.h>

int main () {
	
	float a, b, c;
	
	scanf ("%f %f %f", &a, &b, &c);
	
	if ((a < b) && (b < c))
		printf("%.2f, %.2f, %.2f\n", a, b, c);
	else if ((a < c) && (c < b))
		printf("%.2f, %.2f, %.2f\n", a, c, b);
	else if ((b < a) && (a < c))
		printf("%.2f, %.2f, %.2f\n", b, a, c);
	else if ((b < c) && (c < a))
		printf("%.2f, %.2f, %.2f\n", b, c, a);
	else if ((c < a) && (a < b))
		printf("%.2f, %.2f, %.2f\n", c, a, b);
	else if ((c < b) && (b < a))
		printf("%.2f, %.2f, %.2f\n", c, b, a);			
	
	return 0;
}
