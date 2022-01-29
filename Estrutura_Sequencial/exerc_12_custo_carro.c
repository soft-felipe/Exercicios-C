#include <stdio.h>

int main() {
	
	float preco_fab, percen_dist, percen_imp, custo1, custo2, custo_total;
	
	scanf("%f",& preco_fab);
	scanf("%f",& percen_dist);
	scanf("%f",& percen_imp);
	
	custo1 = (percen_dist / 100.0) * preco_fab;
	custo2 = (percen_imp / 100.0) * preco_fab;
	custo_total = preco_fab + custo1 + custo2;
	
	printf("O VALOR DO CARRO E = %.2f\n", custo_total);
	
	return 0;
}
