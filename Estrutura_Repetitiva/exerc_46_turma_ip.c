#include <stdio.h>

int main () {
	
	int mat, hrs;
	float p1, p2, p3, p4, p5, p6, p7, p8;
	float l1, l2, l3, l4, l5, t, nota, mp, ml;
	
	scanf ("%d %f %f %f %f %f %f %f %f ", &mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8);
	scanf ("%f %f %f %f %f %f %d", &l1, &l2, &l3, &l4, &l5, &t, &hrs);
	
	while (mat != -1) {
		mp = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8.0;
		ml = (l1 + l2 + l3 + l4 + l5) / 5.0;
		nota = (mp * 0.7) + (0.15 * ml) + (0.15 * t);
		
		printf ("Matricula: %d, Nota Final: %.2f, Situacao Final: ", mat, nota);
		
		if ((nota >= 6.0) && (hrs > 96))
			printf ("APROVADO\n");
		else if ((nota < 6.0) && (hrs > 96))
			printf ("REPROVADO POR NOTA\n");
		else if ((nota >= 6.0) && (hrs < 96))
			printf ("REPROVADO POR FREQUENCIA\n");
		else
			printf ("REPROVADO POR NOTA E POR FREQUENCIA\n");
		
		scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d", &mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &t, &hrs);	
	}
	
	return 0;
}

