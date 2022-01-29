#include <stdio.h> 

int fibonacci (int t1, int t2, int n) {

	if (n == 1) {
		return t1;
	} else if (n == 2) {
		return t2;
	} else {
		return (fibonacci (t1, t2, n - 1) + fibonacci (t1, t2, n - 2));
	}
}

int main () {
	
	int t1, t2, n, fib;
	scanf("%d %d %d", &t1, &t2, &n);
	
	fib = fibonacci (t1, t2, n);
	
	printf("%d\n", fib);
	
	return 0;
}
