#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i;
	printf("Esercizio numero 6: STAMPARE ARREY IN ORDINE INVERSO\n\n");
	printf("Inserisci i %d valori dell array:\n\n",N);
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		
	}
	 printf("\nIl vettore specchiato e': ");
	 for(i=0;i<N;i++) {
    
	    printf("%d ",v[N-i-1]);
	}
}
