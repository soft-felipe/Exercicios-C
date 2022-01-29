#include <stdio.h>

int main () {
	
	int n = 1, i, sequencia = 1;
	float termo, aux = 0.0;
	
	while (n != 0) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		} else {
			for (i = 2; i <= n; i++) {
				scanf("%f", &termo);
				if (termo >= aux) {
					aux = termo;
					sequencia = 1;
				} else {
					sequencia = 0;
				}
			}
		}
		if (sequencia == 1) {
			printf("ORDENADA\n");
		} else {
			printf("DESORDENADA\n");
		}
	}
		
	return 0;
}
