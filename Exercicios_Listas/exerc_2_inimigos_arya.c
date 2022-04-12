#include <stdio.h>
#include <stdlib.h>

struct Inimigos {
	int x;
	struct Inimigos *prox;
};

typedef struct Inimigos inimigos;

inimigos* criarLista() {

	inimigos *Head = NULL;

	Head = (inimigos*) malloc(sizeof(inimigos));

	if (Head != NULL) {
		Head->prox = NULL;
	}

	return Head;
}

void criarNoFinal(inimigos *Head) {

	inimigos *no = NULL;
	inimigos *temp;
	no = (inimigos*) malloc(sizeof(inimigos));

	if (no == NULL) {
		printf("Erro na alocacao de memoria\n");
		exit(1);
	}
	scanf("%d", &(no->x));
	no->prox=NULL;

	if (Head->prox == NULL) {
		no->prox = NULL;
		Head->prox = no;
	} else {
		temp = Head->prox;
		while (temp->prox != NULL) {
			temp = temp->prox;
		}

		temp->prox = no;
	}
}

void imprimirLista(inimigos *Head) {

	//printf("IMPRIMIR LISTA\n");
	inimigos *temp;
	if (Head->prox == NULL) {
		//printf("NAO E POSSIVEL IMPRIMIR UMA LISTA VAZIA !!!\n");
		exit(1);
	}

	temp = Head->prox;
	while (temp != NULL) {
		printf("%d ", temp->x);
		temp = temp->prox;
	}

	printf("\n");
}

int insercaoAposX(int p, int e, inimigos *Head) {

	inimigos *novo = (inimigos*) malloc(sizeof(inimigos));
	inimigos *temp;

	void *aux;
	int flag = 0;
	if (novo == NULL) {
		printf("Erro de Alocacao\n");
		return 0;
	}

	novo->x = p;
	temp = Head->prox;

	while (temp->x != e) {
		temp = temp->prox;
	}

	if (temp->x == e) {
		flag=1;
		aux = (inimigos*) temp->prox;
		temp->prox = novo;
		novo->prox = aux;
	}

	printf("inserido %d\n", p);
	return flag;
}

int removeX(int p, inimigos *head) {

	inimigos *temp;
	inimigos *aux_anterior = NULL;
	inimigos *aux_sucessor = NULL;
	temp = head->prox;

	if (temp == NULL) {
		printf("Lista Vazia\n");
		return 0;
	}

	while (temp->x != p) {
		if (temp->prox->x == p) {
			aux_anterior = temp;
		}

		temp = temp->prox;
		if (temp->x == p) {
			aux_sucessor = temp->prox;
		}
	}

	if (temp->x == p) {
		//achou elemento
		aux_anterior->prox = aux_sucessor;
		free(temp);
		return 1;
	}
}

int quantidadeEntreAeB(int a, int b, inimigos *Head) {

	inimigos *temp, *inicio;
	int cont = 0;
	temp = Head->prox;

	if (a == b) {
		printf("%d\n", -1);
		return 0;
	}

	while (temp->x != a) {
		//procurando elemento a
		if (temp->x == b) {
			quantidadeEntreAeB(b, a, Head);
			return 1;
		}
		temp = temp->prox;
	}

	if (temp->x == a) {
		inicio = temp->prox;

		while (inicio->x != b) {
			inicio = inicio->prox;
			cont++;
		}
	}

	printf("quantidade %d\n", cont);
	return cont;
}

void operacao(char c, inimigos *Head) {

	int p, e, a, b;

	if (c == 'I') {
		//inserção
		scanf(" %d %d", &e, &p);
		insercaoAposX(e, p, Head);
	} else if (c == 'R') {
		//remove
		scanf(" %d", &p);
		removeX(p, Head);
		printf("removido %d\n", p);
	} else if (c == 'C') {
		//quantos inimigos estao na lista entre a e b excluindo a e b
		scanf(" %d %d", &a,  &b);
		quantidadeEntreAeB(a, b, Head);
	} else if (c == 'M') {
        imprimirLista(Head);
	} else if (c == 'F') {
        printf("fim\n");
		return ;
	} else {
		printf("Operacao Invalida\n");
		return ;
	}
}

int main() {

	inimigos *lista;
	int n, i, aux;
	char c;

	lista = criarLista();

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		criarNoFinal(lista);
	}

	//lendo as operações
	do {
		getchar();
		scanf("%c", &c);
		operacao(c, lista);
	} while(c != 'F');

	return 0;
}
