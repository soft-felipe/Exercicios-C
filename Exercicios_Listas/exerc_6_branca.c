#include<stdio.h>
#include<stdlib.h>

int main() {

    int repeticoes;

    scanf("%d", &repeticoes);

    while (repeticoes--) {

        int total_pessoas, valores_distintos, i, casos_de_teste;

        scanf("%d %d", &total_pessoas, &valores_distintos);

        int valores[total_pessoas];

        for (i = 0; i < total_pessoas; i++) {
            scanf("%d", &valores[i]);
        }

        scanf("%d", &casos_de_teste);

        for (i = 0; i < casos_de_teste; i++) {
            int pos_inicial, pos_final, totais[valores_distintos+1], j;

            scanf("%d %d", &pos_inicial, &pos_final);

            for (j = 0; j < valores_distintos + 1; j++) {
                totais[j] = 0;
            }

            for (j = pos_inicial - 1; j < pos_final; j++) {
                totais[valores[j]]++;
            }

            int maior_valor = 0, valor_ganhando;
            for (j = 0; j < valores_distintos + 1; j++) {
                if (totais[j] > maior_valor) {
                    valor_ganhando = j;
                    maior_valor = totais[j];
                }
            }

            //printf("valor_ganhando: %d, maior_valor: %d\n", valor_ganhando, maior_valor);

            int total_elementos = pos_final - pos_inicial + 1;

            //printf("total_elementos: %d\n", total_elementos);

            if (maior_valor > total_elementos/2) {
                // feia
                printf("bonita %d\n", valor_ganhando);
            }
            else {
                printf("feia\n");
            }
        }
    }

    return 0;
}
