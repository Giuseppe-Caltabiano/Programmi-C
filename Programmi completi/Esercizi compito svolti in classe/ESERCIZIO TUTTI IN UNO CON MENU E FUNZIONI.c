#include <stdio.h>
#include <unistd.h>
#define N 5

int inserisciarray(int v[]){
	int i;
	for(i=0;i<N;i++) {
		printf("\nInserisci il numero di posto v[%d]:",i);
		scanf("%d",&v[i]);
}
}
int somma(int v[]){
	int i,somma=0;
	for(i=0;i<N;i++) {
		somma= somma+v[i];
}
   printf("\nLa somma e': %d\n",somma);
	
}


int media(int v[]){
	int i;
	float somma=0;	
	for(i=0;i<N;i++) {
		somma= somma+v[i];
}
   printf("\nLa media e': %0.2f\n",somma/N);
	
}


int valoremaxmin(int v[]){
	int i,massimo,minimo,pmax,pmin;
		minimo=v[0];
		massimo=v[0];

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
   printf("\nIl massimo e' in posizione %d ed e': %d \n",pmax,massimo);
   printf("Il minimo e' in posizione %d ed e': %d\n",pmin,minimo);
}


int conteggioparidispari(int v[]){
	int i,dispari=0,pari=0;	
	for(i=0;i<N;i++) {
		if(v[i]%2==0){
			pari++;
		}else {
			dispari++;
		}
		}
	
			printf("\nCi sono %d numeri pari e %d numeri dispari.\n",pari,dispari);	
}


int verificapresenza(int v[]){
	int i,controllo,verifica=0;	
	printf("\nInserisci il numero che vuoi confrontare:");
	scanf("%d",&controllo);
	for(i=0;i<N;i++) {
		if(v[i]==controllo){
			printf("\nIl numero da te inserito e' stato trovato nella posizione v[%d]\n",i);
			verifica=1;
		}else{}
		
		
	}
	if(verifica==0) printf("\nNessuna corrispondenza\n");
}


int stampainversa(int v[]){
	int i;	
	 printf("\nIl vettore specchiato e': ");
	 for(i=0;i<N;i++) {
    
	    printf("%d ",v[N-i-1]);
	}
}


int sommaindicipari(int v[]){
		int i,somma=0;	
	for(i=0;i<N;i++) {
		if(i%2==0)somma=somma+v[i];
		
	}
    printf("\nLa somma degli indici pari e': %d\n",somma);
}


int main (void){
	int v[N];
	int scelta;
	printf("---ESERCIZIO 1 2 3 4 5 6 7 TUTTO IN UNO CON MENU E FUNZIONI---\n\n");
	printf("Inserisci i %d valori dell array:\n",N);
	inserisciarray(v);
	do{
	printf("\n\n------MENU AZIONI ARREY-----\n");
	printf("N.1 Somma elementi\n");
	printf("N.2 Media elementi\n");
	printf("N.3 Trova valore massimo e minimo\n");
	printf("N.4 Conta i numeri pari e dispari\n");
	printf("N.5 Trova un numero\n");
	printf("N.6 Stampa al contrario\n");
	printf("N.7 Somma degli indici pari\n");
	printf("N. 8 Reinserisci array\n");
	printf("N.0 EXIT\n");
	printf("Inserisci il numero corrispondente all'azione da eseguire --->");
	scanf("%d",&scelta);
	switch(scelta) {
		case 1: somma(v); break;
		case 2: media(v); break;
		case 3: valoremaxmin(v); break;
		case 4: conteggioparidispari(v); break;
		case 5: verificapresenza(v); break;
		case 6: stampainversa(v); break;
		case 7: sommaindicipari(v); break;
		case 8: inserisciarray(v); break;
		case 0: printf("\nTERMINAZIONE PROGRAMMA IN CORSO\n");
		        sleep(1);
		        printf("3\n");
		        sleep(1);
		        printf("2\n");
		        sleep(1);
		        printf("1\n");
		        sleep(1);
		        printf("TERMINAZIONE ESEGUITA CON SUCCESSO");
		        break;
	default: printf("\nIl numero inserito non e' corretto, riprova.\n");
}
} while(scelta!=0);	
}
