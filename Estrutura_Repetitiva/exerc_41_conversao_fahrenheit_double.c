#include <stdio.h>

int main () {
	
	int n_casos, i=0;
	double v_fah, v_cel;
	scanf ("%d", &n_casos);
	
	while (n_casos--) {
		scanf ("%lf", &v_fah);
		
		v_cel = 5.0*(v_fah - 32.0)/9.0;
		
		printf ("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", v_fah, v_cel);
	}
	
	return 0;
}
