#include <stdio.h>

int main () {
	
	int k, i = 1;
	double soma = 0.0;
	
	scanf ("%d", &k);
	
	if (k <= 1)
		printf("Numero invalido!\n");
	else {
		while (i <= k) {
			soma += 1.0 / i;
			i++;
		} 
		printf("%.6lf\n", soma);
	}	
	
	return 0;
}
