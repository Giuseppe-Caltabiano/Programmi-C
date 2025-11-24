#include <stdio.h>

int main(void){
	int N;
	int somma=0;
	int i;
	printf("SOMMA DEI PRIMI N NUMERI PARI\n");
	printf("Inserisci il numero N:");
	scanf("%d", &N);
	
	for(i=0;i<=N;i++) {
	  if(i%2==0){
	  	somma=somma+i;
	  	
	  }
	  printf("Siamo arrivati al ciclo numero %d e la somma vale %d \n",i+1,somma);
}
    printf("Somma finale: %d", somma);
}

