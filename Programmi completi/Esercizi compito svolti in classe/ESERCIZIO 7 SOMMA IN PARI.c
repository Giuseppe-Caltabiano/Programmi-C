#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i,somma=0;
	printf("Esercizio numero 7: SOMMA DI INDICI PARI\n\n");
	printf("Inserisci i %d valori dell array:\n\n",N);
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		if(i%2==0)somma=somma+v[i];
		
	}
    printf("\nLa somma degli indici pari e': %d",somma);
    
    
}
