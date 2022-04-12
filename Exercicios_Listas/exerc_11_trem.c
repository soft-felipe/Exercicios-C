#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

typedef struct {
	int vagoes[MAX];
	int topo;
} Trem;

void push(Trem *t, int numero) {
	t->vagoes[++t->topo] = numero;
}

void pop(Trem *t) {
	t->topo--;
}

int main() {

	int total_vagoes;

	scanf("%d", &total_vagoes);

	Trem trem;

	while (1) {

		trem.topo = -1;

		int i, entrada, marca_zero = 0, entrando = 1, fora_sequencia = 0;

		for (i = 0; i < total_vagoes && marca_zero == 0 && fora_sequencia == 0; i++) {
			scanf("%d", &entrada);

			if (entrada == 0) {
				marca_zero = 1;
				break;
			}

			while (1) {
				if (entrada == entrando) {
					entrando++;
					break;
				}
				else {
					if (entrada > entrando) {
						push(&trem, entrando);
						entrando++;
					}
					else {
						if (trem.vagoes[trem.topo] == entrada) {
							pop(&trem);
						}
						else {
							fora_sequencia = 1;
							for ( ; i < total_vagoes - 1; i++)
								scanf("%d", &entrada);
						}
						break;
					}
				}
			}

		}
		if (marca_zero == 0) {
			if (fora_sequencia == 0) {
				printf("sim\n");
				break;
			}
			else {
				printf("nao\n");
				break;
			}
		}

	}

	return 0;

}
