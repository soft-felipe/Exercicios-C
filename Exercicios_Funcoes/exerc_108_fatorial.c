#include <stdio.h>

long int fat (int n) {
	
	int i;
	long int fat, f;
	
	if (n == 0)
		fat = 1;
	else {
		f = 1;
		i = n;
		
		while (i > 1) {
			f *= i;
			i--;
		} 
		fat = f;
	}	
	
	return fat;
}

int main () {
	
	int n;
	long int fatorial;
	scanf("%d", &n);
	
	fatorial = fat(n);
	
	printf("%d! = %ld\n", n, fatorial);
	
	return 0;
}
