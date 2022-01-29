#include<stdio.h>

int main () {
	
	int a, b, c, d, valor;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if ((a > b) && (a > c) && (a > d)) {
		valor = (a + b + c + d) - a;
		printf("%d\n", valor);
	} else if ((b > a) && (b > c) && (b > d)) {
		valor = (a + b + c + d) - b;
		printf("%d\n", valor);
	} else if ((c > a) && (c > b) && (c > d)){
		valor = (a + b + c + d) - c;
		printf("%d\n", valor);
	} else if ((d > a) && (d > b) && (d > c)) {
		valor = (a + b + c + d) - d;
		printf("%d\n", valor);
	}
	
	return 0;
}
