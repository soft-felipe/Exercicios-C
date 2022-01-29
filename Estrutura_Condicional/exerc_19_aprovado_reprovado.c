#include<stdio.h>

int main() {
	
	float n1, n2, n3, media;
	
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3.0;
	
	if ((media < 6.0))
		printf ("MEDIA = %.2f\nREPROVADO\n", media);
	else {
		printf("MEDIA = %.2f\nAPROVADO\n", media);
	}
	
	return 0;
}
