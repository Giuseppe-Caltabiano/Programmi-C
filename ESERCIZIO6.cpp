#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i;
	printf("Esercizio numero 6: STAMPARE ARREY IN ORDINE INVERSO\n\n");
	
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		
	}
	 printf("Il vettore specchiato e': ");
	 for(i=0;i<N;i++) {
    
	    printf("%d ",v[N-i-1]);
	}
}
