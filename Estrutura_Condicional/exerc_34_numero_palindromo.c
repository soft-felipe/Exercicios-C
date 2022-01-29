#include <stdio.h>

int main () {
	
	int numero, d1, d2, d3, d4, d5, inverso;
	
	scanf ("%d", &numero);
	
	if ((numero > 99999)) {
		printf("NUMERO INVALIDO\n");
		return 0;
	}
	
	if ((numero > 9999)) {
		d1 = numero / 10000;
		d2 = numero % 10000 / 1000;
		d3 = numero % 10000 % 1000 / 100;
		d4 = numero % 10000 % 1000 % 100 / 10;
		d5 = numero % 10000 % 1000 % 100 % 10;
		// printf ("%d %d %d %d %d", d1, d2, d3, d4, d5);
		inverso = (d5*10000) + (d4*1000) + (d3*100) + (d2*10) + (d1*1);
	} else if ((numero > 999)) {
		d1 = numero / 1000;
		d2 = numero % 1000 / 100;
		d3 = numero % 1000 % 100 / 10;
		d4 = numero % 1000 % 100 % 10;
		inverso = (d4*1000) + (d3*100) + (d2*10) + (d1*1);
	} else if ((numero > 99)) {
		d1 = numero / 100;
		d2 = numero % 100 / 10;
		d3 = numero % 100 % 10;
		inverso = (d3*100) + (d2*10) + (d1*1);
	} else if ((numero > 9)) {
		d1 = numero / 10;
		d2 = numero % 10;
		inverso = (d2*10) + (d1*1);
	}
		
	if ((numero != inverso))
		printf ("NAO PALINDROMO\n");
	else if ((numero == inverso))
		printf ("PALINDROMO\n");	
	
	return 0;
}


