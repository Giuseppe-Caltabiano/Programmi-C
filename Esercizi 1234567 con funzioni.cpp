#include <stdio.h>


int somma(int v[], int N){
	int i,somma=0;
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		somma= somma+v[i];
}
   printf("La somma e': %d\n",somma);
	
}


int media(int v[], int N){
	int i,somma=0;	
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		somma= somma+v[i];
}
   printf("La media e': %d\n",somma/N);
	
}


int valoremassimo(int v[], int N){
	int i,massimo=0,minimo=0,pmax,pmin;
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		
		
		}
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
   printf("Il massimo e' in posizione %d ed e': %d \n Il minimo e' in posizione %d ed e': %d\n",pmax,massimo,pmin,minimo);
	
}


int conteggioparidispari(int v[],int N){
	int i,dispari=0,pari=0;	
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		if(v[i]%2==0){
			pari++;
		}else {
			dispari++;
		}
		}
	
			printf("Ci sono %d numeri pari e %d numeri dispari.\n",pari,dispari);	
}


int verificapresenza(int v[], int N){
	int i,controllo,verifica=0;	
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
	if(verifica==0) printf("Nessuna corrispondenza\n");
}


int stampainversa(int v[], int N){
	int i;	
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		
	}
	 printf("Il vettore specchiato e': ");
	 for(i=0;i<N;i++) {
    
	    printf("%d ",v[N-i-1]);
	}
}


int sommaindicipari(int v[], int N){
		int i,somma=0;	
	for(i=0;i<N;i++) {
		printf("Inserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
		if(i%2==0)somma=somma+v[i];
		
	}
    printf("\nLa somma degli indici pari e': %d\n",somma);
}


int main (void){
	int N=5;
	int v[N];
	int scelta;
	do{
	printf("\n------MENU AZIONI ARREY-----\n");
	printf("N.1 Somma elementi\n");
	printf("N.2 Media elementi\n");
	printf("N.3 Trova valore massimo\n");
	printf("N.4 Conta i numeri dispari\n");
	printf("N.5 Trova un numero\n");
	printf("N.6 Stampa al contrario\n");
	printf("N.7 Somma degli indici pari\n");
	printf("N.0 EXIT\n");
	printf("Inserisci il numero corrispondente all'azione da eseguire --->");
	scanf("%d",&scelta);
	switch(scelta) {
		case 1: somma(v, N); break;
		case 2: media(v,N); break;
		case 3: valoremassimo(v,N); break;
		case 4: conteggioparidispari(v,N); break;
		case 5: verificapresenza(v,N); break;
		case 6: stampainversa(v,N); break;
		case 7: sommaindicipari(v,N); break;
		case 0: break;
	default: printf("Il numero inserito non e' corretto\n");
}
} while(scelta!=0);
	
	
	
	
	
	
	
    
    
	
}
