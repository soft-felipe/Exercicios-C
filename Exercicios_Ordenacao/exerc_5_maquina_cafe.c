#include <stdio.h>

int main() {

    int numeroCasos, pessoas, horas[100], minutos[100], i, j, maquinasCafe = 0, guardarHoras = -1, guardarMinutos = -1;

    scanf("%d", &numeroCasos);

    while (numeroCasos) {
        scanf("%d", &pessoas);

        for (i = 0; i < pessoas; i++) {
            scanf("%d %d", &horas[i], &minutos[i]);
        }

        maquinasCafe = 0;
        for (i = 0; i < pessoas; i++) {
            for (j = i+1; j < pessoas; j++) {
                if (horas[i] == horas[j]) {
                    if (minutos[i] == minutos[j]) {
                        maquinasCafe++;
                        guardarHoras = horas[i];
                        guardarMinutos = minutos[i];
                    }
                }
            }
        }

        printf("%d\n", maquinasCafe+1);
        numeroCasos--;
    }

    return 0;
}
