#include <stdio.h>

void selectionSortDecrescente(int v[], int n) {
    int min, x, j = 0, i = 0;

    for (i = 0; i < n-1; ++i) {
        min = i;
        for (j = i+1; j < n; ++j) {
            if (v[j] > v[min]) { min = j; }
        }
        x = v[i];
        v[i] = v[min];
        v[min] = x;
   }
}

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

    int tamanhoVetor, i, elementos[100], contPar = 0, contImpar = 0;

    scanf("%d", &tamanhoVetor);

    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", & elementos[i]);
    }

    selectionSort(elementos, tamanhoVetor);

    for (i = 0; i < tamanhoVetor; i++) {
        if (elementos[i] % 2 == 0) {
            printf("%d", elementos[i]);
            contPar++;

            if (i < tamanhoVetor-1) {
                printf(" ");
            }
        }
    }

    if (contPar > 0) { printf("\n"); }

    selectionSortDecrescente(elementos, tamanhoVetor);

    for (i = 0; i < tamanhoVetor; i++) {
        if (elementos[i] % 2 != 0) {
            printf("%d", elementos[i]);
            contImpar++;

            if (i < tamanhoVetor-1) {
                printf(" ");
            }
        }
    }

    if (contImpar > 0) { printf("\n"); }

    return 0;
}
