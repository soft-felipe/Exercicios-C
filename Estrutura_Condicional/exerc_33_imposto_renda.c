#include <stdio.h>

int main () {
	
	int mat, dep;
	float s_min, s_func, taxa, imp_nor, imp_br, imp_liq, imp;
	
	scanf("%d %f %d %f %f", &mat, &s_min, &dep, &s_func, &taxa);
	
	imp_nor = s_func * (taxa/100.0);
	
	printf("MATRICULA = %d\n", mat);
	
	if ((s_func > 12.0 * s_min)) {
		imp_br = s_func * 0.2;
		printf("IMPOSTO BRUTO = %.2f\n", imp_br);
	} else if ((s_func > 5.0 * s_min) && (s_func <= 12.0 * s_min)) {
		imp_br = s_func * 0.08;
		printf("IMPOSTO BRUTO = %.2f\n", imp_br);	
	} else if ((s_func <= 5.0 * s_min)) {
		imp_br = 0.0;
		printf("IMPOSTO BRUTO = %.2f\n", imp_br);
	}
	
	imp_liq = imp_br - (300.0 * dep);
	printf("IMPOSTO LIQUIDO = %.2f\n", imp_liq);
	
	imp = imp_liq - imp_nor;
	printf("RESULTADO = %.2f\n", imp);
	
	if ((imp < 0))
		printf("IMPOSTO A RECEBER\n");
	else if ((imp == 0))
		printf ("IMPOSTO QUITADO\n");
	else if ((imp >= 1))
		printf("IMPOSTO A PAGAR\n");		
	
	return 0;
}
