#include<stdio.h>

int main() {
	
	int hrs, mnts, seg, hrs_seg, mnts_seg;
	
	scanf("%d", &hrs);
	scanf("%d", &mnts);
	scanf("%d", &seg);
	
	hrs_seg = hrs * 3600; 
	mnts_seg = mnts * 60;
	seg = seg + mnts_seg + hrs_seg;
	
	printf("O TEMPO EM SEGUNDOS E = %d\n", seg);
	
	return 0;	
}
