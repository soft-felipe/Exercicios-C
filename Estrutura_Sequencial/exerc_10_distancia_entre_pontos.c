#include<stdio.h>
#include<math.h>// utilizando essa biblioteca para calcular raiz quadrada

int main() {
	
	float coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2, distancia;
	
	scanf("%f", &coordenada_x1);
	scanf("%f", &coordenada_y1);
	scanf("%f", &coordenada_x2);
	scanf("%f", &coordenada_y2);
	
	distancia = sqrt((pow(coordenada_x2-coordenada_x1,2)) + pow(coordenada_y2-coordenada_y1,2));
	// utilizando sqrt() para calcular raiz e pow(x,2) para x^2
	
	printf("A DISTANCIA ENTRE A e B = %.2f\n", distancia);
	
	return 0;
}
