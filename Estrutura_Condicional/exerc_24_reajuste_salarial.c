#include<stdio.h>

int main() {
	
	float salario, salario_final;
	
	scanf("%f", &salario);
	
	if ((salario <= 300.0)) {
		salario_final = salario + 0.5 * salario;
		printf("SALARIO COM REAJUSTE = %.2f\n", salario_final);
	} else if ((salario > 300.0)) {
		salario_final = salario + 0.3 * salario;
		printf("SALARIO COM REAJUSTE = %.2f\n", salario_final);
	}
	
	return 0;
}
