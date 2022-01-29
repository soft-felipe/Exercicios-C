#include<stdio.h>
#include<math.h> // para utilizar pow() em potencia

int main() {
	
	// double tem a diretiva ''%lf'' e serve para uma precisão dupla (64bits)
	double velocidade_ms, velocidade_km, aceleracao, tempo, massa, espaco_perc, trabalho;
	
	scanf("%lf", &massa); // entrada em toneladas
	scanf("%lf", &aceleracao); // entrada em m/s
	scanf("%lf", &tempo); // entrada em segundos
	
	massa = massa * 1000; // para transformar de toneladas para kilos, sistema si
	velocidade_ms = aceleracao * tempo;
	velocidade_km = velocidade_ms * 3.6; // para transformar de m/s para km/h
	espaco_perc = aceleracao * pow(tempo,2) / 2.0;
	trabalho = massa * pow(velocidade_ms,2) / 2.0; // a massa deve estar em kilos e a velocidade em m/s
	//printf("v: %.2lf e: %.2lf t: %.2lf\n",velocidade_km,espaco_perc,trabalho);
	
	printf("VELOCIDADE = %.2lf\n", velocidade_km); // a saida tem que ser em km/h
	printf("ESPACO PERCORRIDO = %.2lf\n", espaco_perc);
	printf("TRABALHO REALIZADO = %.2lf\n", trabalho); 
	
	return 0;	
}
