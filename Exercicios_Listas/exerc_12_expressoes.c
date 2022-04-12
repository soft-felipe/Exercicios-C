#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	int t;

	scanf("%d", &t);

	while (t > 0) {

		char expressao[1000], empilhada[1000];
		int cont_pilha = 0, cont = 0, i;
	
		scanf("%s", expressao);

		for (i = 0; i < strlen(expressao); i++) {
			if (expressao[i] == '(' || expressao[i] == '{' || expressao[i] == '[') {
				empilhada[cont_pilha] = expressao[i];
				cont_pilha++;
			}
			else {
				char abertura = ' ';
				switch (expressao[i]) {
					case ')':
						abertura = '(';
						break;
					case '}':
						abertura = '{';
						break;
					case ']':
						abertura = '[';
				}

				if (cont_pilha == 0 || empilhada[cont_pilha - 1] != abertura) {
					cont = 1;
					break;
				}

				cont_pilha--;
			}
			
		}
		if (cont_pilha > 0 || cont > 0) {
			printf("mal-formada\n");
		}
		else {
			printf("bem-formada\n");
		}
		t--;
	}

	return 0;

}
