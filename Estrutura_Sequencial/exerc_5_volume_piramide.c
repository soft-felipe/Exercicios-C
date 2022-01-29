#include<stdio.h>
#include<math.h> // incluindo nova biblioteca para fazer raiz quadrada

int main() {
	
	float h, a, v, ab;
	
	scanf("%f", &h);
	scanf("%f", &a);
	
	ab = 3.0 * a * a * sqrt(3.0) / 2.0;
	v = 1.0 / 3.0 * ab * h;
	
	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v);
	
	return 0;
}
