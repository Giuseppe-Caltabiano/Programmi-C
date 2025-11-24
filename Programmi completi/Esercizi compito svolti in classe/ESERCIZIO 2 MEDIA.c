#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i,somma=0;
    printf("Esercizio numero 2: MEDIA VALORI IN UN'ARREY\n\n");
	printf("Inserisci i %d valori dell array:\n",N);
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		somma= somma+v[i];
}
   printf("La media e': %d",somma/N);
	
}
