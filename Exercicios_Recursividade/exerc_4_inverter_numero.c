#include <stdio.h>

int inverter (int n) {
	
	int aux;
	
	if (n == 0) {
		return n;
	} else {
		printf("%.d", n % 10);
		n /= 10;
		inverter(n);	
	}
}

int main () {
	
	int n;
	scanf("%d", &n);
	
	inverter(n);
	
	return 0;
}
