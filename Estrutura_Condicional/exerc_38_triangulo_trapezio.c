#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c, p_tri, a_tra, p, q, r;
	
	scanf ("%f %f %f", &a, &b, &c);
	
	if ((fabs(b - c) < a && a < b + c) && (fabs(a -c) < b && b < a + c) && (fabs(a - b) < c && c < a + b)) {
		p_tri = a + b + c;
		printf("Perimetro = %.1f\n", p_tri);
	} else {
		a_tra = (a+b)*c/2;
		printf("Area = %.1f\n", a_tra);
	}	
		
	return 0;
}
