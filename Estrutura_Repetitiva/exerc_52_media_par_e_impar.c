#include <stdio.h>

int main () {
	
	int element = 1, i, j, aux;
	float soma_p, soma_i;
	
	i = -1;
	j = 0;
	soma_p = 0.0;
	soma_i = 0.0;
	
	while (element > 0) {
		scanf ("%d", &element);
		if (element % 2 == 0) {
			soma_p += element;
			i++;	
		} else {
			soma_i += element;
			j++;
		}
	}
	printf ("MEDIA PAR: %f\n", soma_p / i);
	printf ("MEDIA IMPAR: %f\n", soma_i / j);
	
	return 0;
}
