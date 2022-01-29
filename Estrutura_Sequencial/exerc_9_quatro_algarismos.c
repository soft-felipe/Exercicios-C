#include<stdio.h>

int main() {
	
	int n, v, dc, d1, d2, d3;
	
	scanf("%d",&n);
	
	d1 = n / 100; // utilizando o / para pegar o quociente - 1
	d2 = (n % 100) / 10; // utilizando a % para pegar o resto da divisao- 2
	d3 = (n % 100) % 10; // pega o 3
	
	//printf("d1: %d d2: %d d3: %d\n",d1,d2,d3);
	
	v = d1 + d2 * 3 + d3 * 5;
	dc = v % 7;
	
	printf("O NOVO NUMERO E = %d%d\n", n, dc);
	
	return 0;
}
