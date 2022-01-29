#include <stdio.h>

int main () {
	int qtd_fam, escola, etnia;
	float renda, renda_per;
	
	scanf ("%f %d %d %d", &renda, &qtd_fam, &escola, &etnia);

	renda_per = renda / qtd_fam;

	if ((escola == 1))
		printf("ALUNO NAO COTISTA\n");
	else if ((escola == 2) && (renda_per <= 1405.5) && (etnia == 4))
		printf("ALUNO COTISTA (L1)\n");
	else if ((escola == 2) && (renda_per <= 1405.5) && (etnia != 4)) 
		printf("ALUNO COTISTA (L2)\n");
	else if ((escola == 2) && (renda_per > 1405.5) && (etnia == 4))
		printf("ALUNO COTISTA (L3)\n");
	else if ((escola == 2) && (renda_per > 1405.5) && (etnia != 4)) 
		printf("ALUNO COTISTA (L4)\n");

return 0;
}
