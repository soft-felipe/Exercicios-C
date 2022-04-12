#include <stdio.h>

int insertionSort(int v[], int n) {
    int i = 0, j = 1, aux = 0, contador = 0;

    while (j < n) {
        aux = v[j];
        i = j - 1;

        while ((i >= 0) && (v[i] > aux)) {
            v[i + 1] = v[i];
            contador++;
            i--;
        }

        v[i + 1] = aux;
        j++;
        contador++;
    }

    return contador;
 }

int selectionSort(int v[], int n) {
    int min, x, j = 0, i = 0, contador = 0;

    for (i = 0; i < n-1; ++i) {
        min = i;
        for (j = i+1; j < n; ++j) {
            if (v[j] < v[min]) { min = j; }
        }

        if (i != min) {
            x = v[i];
            v[i] = v[min];
            contador++;
            v[min] = x;
        }
   }

   return contador;
}

int main() {

    int tamanhoVetor, i, elementos[100], copiaElementos[100], contadorSelection = 0, contadorInsertion = 0;

    scanf("%d", &tamanhoVetor);

    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &elementos[i]);
        copiaElementos[i] = elementos[i];
    }

    contadorInsertion = insertionSort(elementos, tamanhoVetor);
    contadorSelection = selectionSort(copiaElementos, tamanhoVetor);

    printf("%d\n", contadorInsertion - contadorSelection);

    return 0;
}
