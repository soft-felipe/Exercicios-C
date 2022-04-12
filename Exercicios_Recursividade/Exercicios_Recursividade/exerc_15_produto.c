#include <stdio.h>

int produto(int somar, int qtdSomas) {
	
	if (qtdSomas == 0) {
		return 0;
	} else {
		return somar + produto(somar, qtdSomas-1);
	}
}

int main() {
	
	int nCasos, i, somar, qtdSomas;
	scanf("%d", &nCasos);
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d %d", &somar, &qtdSomas);
		
		printf("%d\n", produto(somar, qtdSomas));
	}
	
	return 0;
}
