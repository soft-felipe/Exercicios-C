#include <stdio.h>

int main () {
	
	int a1, r, n, i, soma = 0, termo;
	
	scanf ("%d %d %d", &a1, &r, &n);
	
	i = 1;
	termo = a1;
	soma = termo;

	while (i < n) {
		termo += r;
		soma += termo;
		i++;
	}
	
	printf ("%d\n", soma);
	
	return 0;
}
