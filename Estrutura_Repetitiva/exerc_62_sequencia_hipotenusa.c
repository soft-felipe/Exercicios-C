#include <stdio.h>

int main () {
	
	int n, h, c1, c2, h_2, c1_2, c2_2;
	
	scanf("%d", &n);
	
	for (h = 5; h <= n; h++) {
		h_2 = h * h;
		for (c1 = 3; c1 < (h - 1); c1++) {
			c1_2 = c1 * c1;
			for (c2 = (c1 + 1); c2 < h; c2++) {
				c2_2 = c2 * c2;
				if (h_2 == (c1_2 + c2_2)) {
					printf ("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
				}
			}
		}
	}
	
	return 0;
}
