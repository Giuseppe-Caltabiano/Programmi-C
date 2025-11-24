#include<stdio.h>
int somma (int a, int b){
	return a+b;
}
int main(void){
	int risultato,a,b;
	printf("SOMMA DI 2 NUMERI CON FUNZIONI");
	printf("\nInserisci il primo numero:");
	scanf("%d",&a);
	printf("Inserisci il secondo numero:");
	scanf("%d",&b);
	
	risultato=somma(a,b);
	
	printf("La somma e' %d",risultato);
}
