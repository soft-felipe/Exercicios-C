#include <stdio.h>
#include <stdlib.h>

struct lista {
    int valor;
    struct lista *prox;
};

typedef struct lista LISTA;

void iniciarListaVazia(LISTA **inicio) {
    *inicio = NULL;
}

void inserirNoComeco(LISTA **inicio, int valor) {

    LISTA* auxInicio;

    auxInicio = (LISTA*)malloc(sizeof(LISTA));

    if (auxInicio) {
        auxInicio->valor = valor;
        auxInicio->prox = (*inicio);
        *inicio = auxInicio;
    }
}

void inserirNaLista(LISTA **inicio, int valor) {

    LISTA *auxFinal, *p;

    if (*inicio == NULL) {
        return (inserirNoComeco(inicio, valor));
    }

    auxFinal = (LISTA*)malloc(sizeof(LISTA));

    if (auxFinal) {
        auxFinal->valor = valor;
        auxFinal->prox = NULL;

        p = (*inicio);
        while (p->prox != NULL) {
            p = p->prox;
        }
        p->prox = auxFinal;
    }
}

int buscaRemove(LISTA **inicio, int excluirValor) {

    if (*inicio == NULL) {
        return 0;
    }

    LISTA *p = *inicio, *q;

    while (p->valor != excluirValor && p->prox != NULL) {
        q = p;
        p = p->prox;
    }

    if (p->valor == excluirValor) {
        if (p == *inicio) {
            *inicio = p->prox;
            free(p);
            return 1;
        }
        q->prox = p->prox;
        free(p);
        return 1;
    }

    return 0;
}

void Imprime(LISTA **inicio) {

    LISTA *p = *inicio;

    if (p) {

        while (p) {
            printf("%d ", p->valor);
            p = p->prox;
        }

        printf("\n");
    }
}

int main () {

    LISTA *inicio;
    iniciarListaVazia(&inicio);
    int tamanhoLista, tamanhoExcluidos, novoValor, excluido, i, j;

    scanf("%d", &tamanhoLista);

    for (i = 0; i < tamanhoLista; i++) {
        scanf("%d", &novoValor);
        inserirNaLista(&inicio, novoValor);
    }

    scanf("%d", &tamanhoExcluidos);

    for (j = 0; j < tamanhoExcluidos; j++) {
        scanf("%d", &excluido);
        buscaRemove(&inicio, excluido);
    }

    Imprime(&inicio);

    return 0;
}
