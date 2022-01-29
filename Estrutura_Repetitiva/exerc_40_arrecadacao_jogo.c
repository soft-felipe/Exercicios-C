#include <stdio.h>

int main () {
	
	int n_casos, n_pess, i=0;
	double pop, ger, arq, cad, v_arrec;
	
	scanf ("%d", &n_casos);
	
	while (n_casos--) {
		i ++;
		scanf("%d %lf %lf %lf %lf", &n_pess, &pop, &ger, &arq, &cad);
		
		v_arrec = (n_pess * pop / 100.0) * 1.0 + (n_pess * ger / 100.0) * 5.0 + (n_pess * arq / 100.0) * 10.0 + (n_pess * cad / 100.0) * 20.00;
		printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, v_arrec); 
	}	
	
	return 0;
}
