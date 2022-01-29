#include <stdio.h>

int main () {
	
	int n_seq, element, aux, seq, maior = 0;
	
	scanf ("%d", &n_seq);
	scanf ("%d", &element);
	
	maior = 1;
	seq = 1;
	n_seq--;
	
	while (n_seq--) {
		aux = element;
		scanf ("%d", &element);
		if (aux == element)
			seq ++;
		else
			seq = 1;
			
		if (seq > maior)
			maior = seq;
	} 
	printf ("O comprimento do segmento de numeros iguais e: %d\n", maior);
	
	return 0;
}
