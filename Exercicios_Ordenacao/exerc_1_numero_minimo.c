#include <stdio.h>
#include <math.h>

int main() {

    int elementos[100], i, minimo, tamanhoVetor;
    long int  produto = 1;

    scanf("%d", &tamanhoVetor);

    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &elementos[i]);
        produto *= elementos[i];
    }

    minimo = pow(produto, (float)1.0 / tamanhoVetor);

    for (i = 0; i < tamanhoVetor; i++) {
        printf("%d", minimo + 1);

        if (i < tamanhoVetor-1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
