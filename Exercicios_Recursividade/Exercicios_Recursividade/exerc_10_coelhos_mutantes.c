#include <stdio.h>

int somarOrelhas(int coelhos) {
	
	if (coelhos == 0) {
		return 0;
	} else {
		if (coelhos % 2 == 0) {
			return 3 + somarOrelhas(coelhos-1);
		} else {
			return 2 + somarOrelhas(coelhos-1);
		}
	}
}

int main() {
	
	int nCasos, coelhos, i;
	
	scanf("%d", &nCasos);
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &coelhos);
		
		printf("%d\n", somarOrelhas(coelhos));
	}
	
	return 0;
}
