#include <stdio.h>

int main() {

    int numeroPaises, numeroModalidades, maior, i, j, ouro, prata, bronze;

    scanf("%d %d", &numeroPaises, &numeroModalidades);

    int ranking[numeroPaises+1];

    for (i = 0; i < numeroPaises+1; i++) { ranking[i] = 0; }

    for (i = 0; i < numeroModalidades; i++) {
        scanf("%d %d %d", &ouro, &prata, &bronze);

        ranking[ouro] += 1000000;
        ranking[prata] += 1000;
        ranking[bronze] += 1;
    }

    while (1) {
        maior = -1;
        for (i = 1; i < numeroPaises+1; i++) {
            if (ranking[i] > maior) {
                maior = ranking[i];
            }
        }

        if (maior == -1) {
            printf("\n");
            break;
        }

        for (j = numeroPaises+1; j > 0; j--) {
            if (maior == ranking[j]) {
                printf("%d ", j);
                ranking[j] = -1;
            }
        }
    }

    return 0;
}
