#include <stdio.h>

float interceptoEmX (float a, float b) {
	float X;
	X = -b / a;
	return X;
} 

float interceptoEmY (float a, float b) {
	float Y;
	Y = b;
	return Y;
}

int main () {
	
	int n;
	float a, b, x, y;
	
	scanf("%d", &n);
	
	while (n--) {
		scanf("%f %f", &a, &b);
		
		x = interceptoEmX (a, b);
		y = interceptoEmY (a, b);
		
		printf("Intercepto em x: (%.2f, 0.00)\n", x);
		printf("Intercepto em y: (0.00, %.2f)\n", y); 
	}
		
	return 0;
}
