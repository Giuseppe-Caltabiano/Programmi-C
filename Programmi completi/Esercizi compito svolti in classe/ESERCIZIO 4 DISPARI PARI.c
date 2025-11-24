#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i,dispari=0,pari=0;
	printf("Esercizio numero 4: CONTEGGIO DI NUMERI PARI E DISPARI\n\n");
	printf("Inserisci i %d valori dell array:\n",N);
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		if(v[i]%2==0){
			pari++;
		}else {
			dispari++;
		}
		}
	
			printf("Ci sono %d numeri pari e %d numeri dispari.",pari,dispari);	
}
