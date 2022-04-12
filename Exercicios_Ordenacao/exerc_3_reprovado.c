#include <stdio.h>
#include <string.h>

void selectionSort(int v[], int n) {
    int min, x, j = 0, i = 0;

    for (i = 0; i < n-1; ++i) {
        min = i;
        for (j = i+1; j < n; ++j) {
            if (v[j] < v[min]) { min = j; }
        }
        x = v[i];
        v[i] = v[min];
        v[min] = x;
   }
}

int main() {

    int numeroCasos, i, j, k, l, notaMaxima, maiorNota = -1, menorNota = 11, entrou = 0, coluna = 0;
    char aux[11], menor[11] = {"zzzzzzzzzz"};

    scanf("%d", &numeroCasos);
    getchar();

    char nomes[numeroCasos][11];
    char guardar[numeroCasos][11];
    int notas[numeroCasos];

    for (i = 0; i < numeroCasos; i++) {
        scanf("%s", &nomes[i]);
        getchar();

        scanf("%d", &notas[i]);
        getchar();

        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }

        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }

    notaMaxima = maiorNota;
    for (k = 0; k < 10; k++) {
        j = 0;
        entrou = 0;
        for (i = 0; i < numeroCasos; i++) {
            if (notas[i] == maiorNota) {
                strcpy(guardar[j],nomes[i]);
                j++;
                entrou++;
            }
        }

        for (j = 0; j < entrou; j++) {
            for (l = j+1; l < entrou; l++) {
                for (coluna = 0; coluna < 4; coluna++) {
                    if (guardar[j][coluna] > guardar[l][coluna]) {
                        strcpy(aux,guardar[j]);
                        strcpy(guardar[j],guardar[l]);
                        strcpy(guardar[l],aux);
                    }
                }
            }
        }

        for (j = 0; j < entrou; j++) {
            printf("%s %d", guardar[j], maiorNota);

            if (maiorNota == menorNota && j == entrou-1) {
                printf(" #reprovado(a)\n");
            } else {
                printf("\n");
            }
        }

        maiorNota--;
    }

    return 0;
}
