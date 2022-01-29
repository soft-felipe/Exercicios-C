#include <stdio.h>

int main () {
	
	int n, i, j = 0, total = 0, valor = 0, imp = -1;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		printf("%d*%d*%d = ", i, i, i);
		total = i * i * i;
		valor = 0;
		for ( ; valor < total ; ) {
			if (valor != 0 && valor < total){
				printf("+ ");	
			}
			imp += 2;
			valor += imp;	
			printf("%d ", imp);
		}
		printf("\n");	
	}
	
	return 0;
}
