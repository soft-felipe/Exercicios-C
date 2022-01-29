#include <stdio.h>

int main () {
	
	int n, seq, anterior, ordem, maior;
	
	scanf ("%d", &n);
	scanf ("%d", &seq);
	
	ordem = 1;
	maior = 1;
	while (n--) {
		anterior = seq;
		scanf ("%d", seq);
		if (seq > anterior) {
			ordem++;
		} else if (seq < anterior) {
			ordem = 1;
		}
		
		if (ordem > maior)
			maior = ordem;
	}
	printf ("O comprimento do segmento crescente maximo e: %d\n", ordem);
	
	return 0;
}
