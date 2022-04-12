#include <stdio.h>

int fatorialDuplo (int n) {
	
	if (n == 1) {
		return 1;
	} else {
		if (n % 2 != 0) {
			return (n * fatorialDuplo(n-1));
		} else {
			n = n - 1;
			fatorialDuplo(n);
		}
	}	
}

int main () {
	
	int n;
	scanf("%d", &n);
	
	printf("%d\n", fatorialDuplo(n));
	
	return 0;
}
