#include <stdio.h>
#define MAX 1000

int binario (int decimal) {
	
	if (decimal == 1) {
		printf("1");
		return 1;
	} else {
		printf("%d", decimal % 2);
		decimal /= 2;
		return binario(decimal);
	}
}

int main () {
	
	int vetor[MAX], n, i, decimal, resul;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < n; i++) {
		decimal = vetor[i];
		resul = binario(decimal);
		printf("\n");
	}
	
	return 0;
}
