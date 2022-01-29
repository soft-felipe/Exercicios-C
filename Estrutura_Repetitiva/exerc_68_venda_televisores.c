#include <stdio.h>

int main () {
	
	int mat, t1, t2;
	float s_min, s_bruto, inss, comis1, comis2, limite, p_t1, p_t2, t_comis, s_liq, dif, desc, s_total;
	
	scanf("%f %f %f %f", &s_min, &limite, &p_t1, &p_t2);
	
	mat = 1;
	while (mat != 0) {
		scanf("%d %d %d", &mat, &t1, &t2);
		
		if (mat == 0) {
			break;
		}
		
		if (t1 < 10) {
			comis1 = (0.13 * p_t1) * t1;
		} else {
			comis1 = (0.14 * p_t1) * t1;
		}
		
		if (t2 < 20) {
			comis2 = (0.12 * p_t2) * t2;
		} else {
			comis2 = (0.13 * p_t2) * t2;
		}
		 
		t_comis = comis1 + comis2;
		s_bruto = s_min + t_comis;
		inss = 0.08 * s_bruto;
		s_total = s_bruto - inss;
		
		if (s_total > limite) {
			dif = s_total - limite;
			desc = 0.15 * dif;
			s_liq = s_total - desc;
		} else {
			s_liq = s_total;
		}
		printf("MATRICULA = %d, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f\n", mat, s_bruto, s_liq);
	}

	return 0;
}
