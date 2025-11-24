#include <stdio.h>
#define N 5

int main (){
	int v[N]={1,2,3,4,5};
	int i,somma=0;
	printf("Esercizio numero 1: SOMMA DI TUTTI GLI ELEMENTI\n\n");
	printf("Inserisci i %d numeri dell array fare la somma!",N);
	for(i=0;i<N;i++) {
		printf("\nInserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		somma= somma+v[i];
}
   printf("La somma e': %d",somma);
	
}
