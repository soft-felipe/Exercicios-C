#include <stdio.h>

int natural (int n, int comeco) {
	
	printf("%d ", comeco);
	if (n > comeco) {
		return natural (n, comeco+1);
	} else {
		return 0;
	}
}

int main () {
	
	int n, i;
	scanf("%d", &n);
	
	natural(n, 1);
	
	return 0;
}
