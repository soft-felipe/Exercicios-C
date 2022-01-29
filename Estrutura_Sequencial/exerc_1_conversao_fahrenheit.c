#include<stdio.h> //incluindo a biblioteca padrao de entrada e saida de dados
 
int main() {
	float C,f,quant_chuva,pol;
	
	scanf("%f", &f);
	scanf("%f", &pol);
	
	C = 5.0 * (f-32.0) / 9.0;
	quant_chuva = pol * 25.4;
	
	printf("O VALOR EM CELSIUS = %.2f\n", C);
	printf("A QUANTIDADE DE CHUVA E = %.2f\n", quant_chuva);
	
	return 0;
}
 
