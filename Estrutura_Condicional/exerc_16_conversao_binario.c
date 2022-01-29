#include<stdio.h>

int main() {
	
	int numero, a1, a2, a3, a4, a5, a6, a7, a8;
	
	scanf("%d",& numero);
	
	if ((numero < 0 || numero > 256))
		printf("Numero invalido!\n");
	else { 
		a1 = numero%2;
		a2 = numero/2%2;
		a3 = numero/2/2%2;
		a4 = numero/2/2/2%2;
		a5 = numero/2/2/2/2%2;
		a6 = numero/2/2/2/2/2%2;
		a7 = numero/2/2/2/2/2/2%2;
		a8 = numero/2/2/2/2/2/2/2%2;
		printf("%d%d%d%d%d%d%d%d", a8, a7, a6, a5, a4, a3, a2, a1);
	}	
	
	return 0;
}
