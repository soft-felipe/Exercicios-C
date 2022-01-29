#include<stdio.h>

int main () {
	
	int numero, a1, a2, a3;
	
	scanf("%d", &numero);
	
	a1 = numero / 100;
	a2 = numero % 100 / 10;
	a3 = numero % 100 % 10;
	
	printf("%d%d%d\n", a3, a2, a1);
	
	return 0;
}
