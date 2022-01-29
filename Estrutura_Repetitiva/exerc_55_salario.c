#include <stdio.h>

int main () {
	
	int mat;
	float hrs, v_hrs, salario;
	
	scanf("%d %f %f", &mat, &hrs, &v_hrs);
	getchar();
	
	salario = 0.0;
	while (mat != 0) {
		salario = hrs * v_hrs;
		printf("%d %.2f\n", mat, salario);
		scanf("%d %f %f", &mat, &hrs, &v_hrs);
		getchar();
	}	
	
	return 0;
}
