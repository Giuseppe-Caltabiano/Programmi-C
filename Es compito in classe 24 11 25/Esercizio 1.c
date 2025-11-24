#include<stdio.h>
#define dim 100
int main(){
	int numeri[dim];
	int trovazero;
	int i=0;
	int j;
	int somma=0;
	float media=0;
	int min;
	int max;
	int contapari;
	int contadispari;
	printf("---Proramma statistiche su numeri interi---\n\n");
	printf("Inserisci un array di numeri (massimo %d), inserisci 0 per terminare:\n",dim);
	do{
		printf("Inserisci il numero di posto %d: ",i);
		scanf("%d",&trovazero);
		if(trovazero!=0){
			numeri[i]=trovazero;
			i++;	
		}
		if(i==0&&trovazero==0)	{
			printf("\nNessun valore valido inserito, riprova:\n");
			trovazero=1;
		}	
	}while(trovazero!=0);
	min=numeri[0];
	max=numeri[0];
	printf("\nHai inserito %d numeri",i);

	for(j=0;j<i;j++) {
	    somma=somma+numeri[j];	
	    media=media+numeri[j];
	    if(min>numeri[j]) {
		   min=numeri[j];
	}
	    if(max<numeri[j]) {
		   max=numeri[j];
	}
	    if(numeri[j]%2==0){
	    	contapari++;
		}
		else{
			contadispari++;
		}
}
    printf("\nLa somma e': %d",somma);
    printf("\nLa media e': %0.2f",media/i);
    printf("\nIl numero massimo e': %d",max);
    printf("\nIl numero minimo e': %d",min);
    printf("\nIl numero di numeri pari inseriti e': %d",contapari);
    printf("\nIl numero di numeri dispari inseriti e': %d",contadispari);
}
