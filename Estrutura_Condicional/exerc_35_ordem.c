#include <stdio.h>

int main () {
	
	int n1, n2, n3, a, b, c;
	char l1, l2, l3;
	
	scanf ("%d %d %d", &n1, &n2, &n3);
	scanf (" %c %c %c", &l1, &l2, &l3); // usando o 'espaço' no começo para corrigir o erro com mais de um caractere
			
	if ((n1 < n2) && (n1 < n3))
		a = n1;
	else if ((n2 < n1) && (n2 < n3))
		a = n2;
	else if ((n3 < n2) && (n3 < n1))
		a = n3;
		
	if ((n2 < n1) && (n1 < n3))
		b = n1;
	else if ((n1 < n2) && (n2 < n3))
		b = n2;
	else if ((n1 < n3) && (n3 < n2))
		b = n3;
	else if ((n2 < n3) && (n3 < n1))
		b = n3;
	else if ((n3 < n1) && (n1 < n2))
		b = n1;
	else if ((n3 < n2) && (n2 < n1))
		b = n2;
	
	if ((n1 > n2) && (n1 > n3))
		c = n1;
	else if ((n2 > n3) && (n2 > n1))
		c = n2;
	else if ((n3 > n1) && (n3 > n2))
		c = n3;						
	
	
	if ((l1 == 'A') && (l2 == 'B'))
		printf("%d %d %d\n", a, b, c);
	else if ((l1 == 'A') && (l2 == 'C'))
		printf("%d %d %d\n", a, c, b);
	else if ((l1 == 'B') && (l2 =='A'))
		printf("%d %d %d\n", b, a, c);
	else if ((l1 == 'B') && (l2 == 'C')) 
		printf("%d %d %d\n", b, c, a);
	else if ((l1 == 'C') && (l2 == 'A'))
		printf("%d %d %d\n", c, a, b);
	else if ((l1 == 'C') && (l2 == 'B')) 
		printf("%d %d %d\n", c, b, a);
		
	return 0;
}
