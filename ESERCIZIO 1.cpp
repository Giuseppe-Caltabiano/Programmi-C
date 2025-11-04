#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i,somma=0;
	printf("Esercizio numero 1: SOMMA DI TUTTI GLI ELEMENTI\n\n");
	
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		somma= somma+v[i];
}
   printf("La somma e': %d",somma);
	
}
