#include<stdio.h>
#include<math.h>

int main() {

	float numero, n;
	
	scanf("%f", &numero);
	
	n = (numero*10) + 0.5; // multiplicando por 10 e adicionando 0.5 para arredondar 1 casa decimal
	n = floor(n); // funcao de arredondar, floor()
	n = n / 10.0; // como multipliquei por 10, tem que dividir ao final, para o numero voltar ao normal
	printf("%.6f\n",n); 
	
	n = (numero * 100) + 0.5; // continuando na mesma regra, agora *100 para arrendondar 2 casas
	n = floor(n);
	n = n / 100.0; // ainda dividindo
	printf("%.6f\n", n);
	
	n = (numero * 1000) + 0.5;
	n = floor(n);
	n = n / 1000.0;
	printf("%.6f\n", n); // existem 3 printf pq saem 3 numeros

return 0;
}
