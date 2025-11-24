#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i,massimo,minimo,pmax,pmin;
    printf("Esercizio numero 3: TROVARE E STAMPARE VALORE MASSIMO\n\n");
	printf("Inserisci i %d valori dell array:\n",N);
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		
		
		}
		minimo=v[0];
		minimo=v[0];

    for(i=0;i<N;i++) {
		if(v[i]>=massimo) {
		    massimo=v[i];
		    pmax=i;
			}
		
		if(v[i]<=minimo){
			minimo=v[i];
			pmin=i;
		}
		
}
   printf("Il massimo e' in posizione %d ed e': %d\n Il minimo e' in posizione %d ed e': %d",pmax,massimo,pmin,minimo);
	
}
