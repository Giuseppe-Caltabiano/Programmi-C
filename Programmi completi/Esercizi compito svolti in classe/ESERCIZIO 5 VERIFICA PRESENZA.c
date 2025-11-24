#include <stdio.h>
#define N 5

int main (void){
	int v[N];
	int i,controllo,verifica=0;
	printf("Esercizio numero 5: VERIFICA DI PRESENZA DI UN NUMERO IN UN ARREY\n\n");
	printf("Inserisci i %d valori dell array:\n",N);
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
	}
	printf("Inserisci il numero che vuoi confrontare:");
	scanf("%d",&controllo);
	for(i=0;i<N;i++) {
		if(v[i]==controllo){
			printf("Il numero da te inserito e' stato trovato nella posizione v[%d]\n",i);
			verifica=1;
		}else{}
		
		
	}
	if(verifica==0) printf("Nessuna corrispondenza");
}
