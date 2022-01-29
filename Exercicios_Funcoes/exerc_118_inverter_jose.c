#include <stdio.h>

int inverte (int n) {
	
	int d1, d2, d3, invertido;
	
	d1 = n / 100;
	d2 = n % 100 / 10;
	d3 = n % 100 % 10;
	
	invertido = (d3 * 100) + (d2 * 10) + d1;
	
	return invertido;
}

int main () {
	
	int t, n1, n2, resultado1, resultado2;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &n1, &n2);
		
		resultado1 = inverte(n1);
		resultado2 = inverte(n2);
		
		if (resultado1 >= resultado2) {
			printf("%d\n", resultado1);
		} else {
			printf("%d\n", resultado2);
		}
	}	
	
	return 0;
}
