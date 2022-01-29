#include<stdio.h>

int main() {
	
	int conta;
	float consumo, valor;
	char tipo; // declarando a variavel tipo que vai receber qual consumidor eh
	
	scanf("%d %f %c", &conta, &consumo, &tipo);
	
	tipo = toupper(tipo);
	if ((tipo =='R') || (tipo =='r')) { // se a variavel tipo receber R ou r eh residencial, por isso =='' 
		valor = 5.0 + 0.05 * consumo;
		printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
	} else if ((tipo =='C') || (tipo =='c')) {
		valor = 500; // se o consumo for 80, ele paga 500
		if ((consumo > 80)) // agora se passar de 80
			valor = 500.0 + (consumo - 80.0) * 0.25;
		printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);	
	} else if ((tipo =='I') || (tipo =='i')) { // variavel tipo recencendo qual consumidor eh, =='', ELSE IF
		valor = 800; // se consumir 100, vai pagar 800
		if(consumo > 100) // se consumir mais de 100
			valor = 800.0 + (consumo - 100.0) * 0.04;
		printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
	}
	
	return 0;
}
