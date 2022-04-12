#include <stdio.h>
#include <string.h>

int main() {
	
	int nCasos;
	scanf("%d", &nCasos);
	
	int tamanhoString, i, valor;
	char string[2000], stringInversa[2000];
	
	for (i = 0; i < nCasos; i++) {
		scanf("%d", &tamanhoString);
		getchar();
		
		fgets(string, 2000, stdin);
		
		strcpy(stringInversa, string);
		strrev(stringInversa);
		valor = strncmp(string, stringInversa, tamanhoString-1);
		
		if (tamanhoString-1 == 0) {
		printf("PALINDROMO\n");
		} else {
			if (valor == 0) {
				printf("normal: %s", &string);
				printf("inversa: %s", &stringInversa);
				printf("PALINDROMO\n");
		}	else {
				printf("normal: %s", &string);
				printf("inversa: %s", &stringInversa);
				printf("NAO PALINDROMO\n");
			}
		}
	}
	
	return 0;
}
