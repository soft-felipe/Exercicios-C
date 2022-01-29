#include <stdio.h>

int main () {
	
   int bin[32], n, i, j;
   
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < 32; i++)
			bin[i] = 0;
			
		i = 0;
		while (n != 0) {
			bin[i] = n % 2;
			n = n / 2;
			i++;
		}
		
		if (i == 0)
			printf("%d\n", bin[i]);
		else {
			for(j = i-1; j >= 0; j--)
			printf("%d", bin[j]);
			printf("\n");
		}
    }
    
  return 0;
}
