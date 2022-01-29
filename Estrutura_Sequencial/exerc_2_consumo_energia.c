#include <stdio.h>

int main() {
	
	float salario, cons, v_unit, v_cons, v_desc;
	
	scanf("%f %f", &salario, &cons);
	v_unit = (salario * 0.7) / 100.0;
	v_cons = v_unit * cons;
	v_desc = v_cons * 0.9;
	
	printf("Custo por kW: R$ %.2f\n", v_unit);
	printf("Custo do consumo: R$ %.2f\n", v_cons);
	printf("Custo com desconto: R$ %.2f\n", v_desc);
	
	return 0;
}
