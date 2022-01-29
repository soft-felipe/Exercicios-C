#include<stdio.h>

int main() {
	
	int ano, resto, resto_cem, resto_quatrocentos;
	
	scanf("%d", &ano);
	
	resto = ano % 4;
	resto_cem = ano % 100;
	resto_quatrocentos = ano % 400;
	
	if ((ano <= 1582))
		printf("ANO NAO BISSEXTO\n");	
	else if ((resto != 0) && (resto_cem != 0))
		printf("ANO NAO BISSEXTO\n");
	else if ((resto_cem == 0))
		printf("ANO BISSEXTO\n");
	else if ((resto_cem == 0) && (resto_quatrocentos == 0))
		printf("ANO BISSEXTO\n");
	else if ((resto == 0))
		printf("ANO BISSEXTO\n");	
			
	return 0;
}
