#include<stdio.h>

int main () {
	
	int valor, n_cem, n_cin, n_dez, m_um;
	
	scanf("%d", &valor);
	
	n_cem = valor / 100; // pegar o quociente da divisao por 100
	n_cin = (valor % 100) / 50; // pegar o resto da divisao por 100 e depois o quociente da divisao por 50
	n_dez = (valor % 100) % 50 / 10; // pega o resto da divisao por 100, o resto da divisao por 50 e o quociente da divisao por 10
	m_um = (valor % 100) % 50 % 10; // pega o resto de todas as divisoes
	
	printf("NOTAS DE 100 = %d\n", n_cem);
	printf("NOTAS DE 50 = %d\n", n_cin);
	printf("NOTAS DE 10 = %d\n", n_dez);
	printf("MOEDAS DE 1 = %d\n", m_um);
	
	return 0;
}
