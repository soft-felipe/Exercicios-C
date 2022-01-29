#include <stdio.h>

int main () {
	
	int cont_carb, dur_rock, resist;
	
	scanf("%d %d %d", &cont_carb, & dur_rock, &resist);
	
	if ((cont_carb < 7) && (dur_rock > 50) && (resist > 80000))
		printf("ACO DE GRAU = 10\n");
	else if ((cont_carb < 7) && (dur_rock > 50) && (resist <= 80000))
		printf("ACO DE GRAU = 9\n");
	else if ((cont_carb < 7) && (dur_rock <= 50) && (resist <= 80000))
		printf("ACO DE GRAU = 8\n");
	else if ((cont_carb >= 7) && (dur_rock <= 50) && (resist <= 80000))
		printf("ACO DE GRAU = 7\n");
	else if ((cont_carb < 7) && (resist > 80000))
		printf("ACO DE GRAU = 7\n");
	else if ((dur_rock > 50) && (resist < 80000))	
		printf("ACO DE GRAU = 7\n");
	else if ((cont_carb >= 7) && (dur_rock <= 50) && (resist > 80000))
		printf("ACO DE GRAU = 7\n");
	else if ((cont_carb >= 7) && (dur_rock > 50) && (resist <= 80000))	
			
	return 0;
}
