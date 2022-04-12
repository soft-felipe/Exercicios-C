#include <stdio.h>
#include <string.h>

int ocorrencias(char string[5000], int tamanhoString, int i, int ocorrencia) {
	
	int j;
	
	for (j = 0; j < tamanhoString-1; j++) {
		if (i == tamanhoString-1) {
			printf("%d\n", ocorrencia);
			return 0;
		} else {
			if (string[i] == 'h' && string[i+1] == 'i') {
				return ocorrencias(string, tamanhoString, i+1, ocorrencia+1);
			} else {
				return ocorrencias(string, tamanhoString, i+1, ocorrencia);
			}
		}
	}
}

int main() {
	
	int nCasos;
	
	scanf("%d", &nCasos);
	getchar();
	
	int vetor[nCasos], i, tamanhoString;
	char string[5000];
	
	for (i = 0; i < nCasos; i++) {
		
		fgets(string, 5000, stdin);
		tamanhoString = strlen(string);
		ocorrencias(string, tamanhoString, 0, 0);
	}
	
	return 0;
}
