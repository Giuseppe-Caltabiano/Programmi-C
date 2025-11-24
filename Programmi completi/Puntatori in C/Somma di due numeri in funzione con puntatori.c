#include <stdio.h>
void somma(int*a,int*b,int*risultato){
	*risultato=*a+*b;
	printf("\nIndirizzo memoria variabile 'risultato' nella funzione: %p",(void*)&risultato);
	printf("\nContenuto variabile 'risultato' nella funzione: %p",(void*)risultato);
	
}
int main (){
	int a,b;
	int risultato;
	printf("SOMMA DI 2 NUMERI CON PUNTATORI E FUNZIONI CON INDIRIZZI DI MEMORIA VISIBILI\n\n");
	printf("Indirizzo memoria variabile 'risultato' nel main: %p\n\n",(void*)&risultato);
	printf("Inserisci il 1 numero della somma: ");
	scanf("%d",&a);
	printf("Inserisci il 2 numero della somma: ");
	scanf("%d",&b);
	somma(&a,&b,&risultato);
	printf("\n\nContenuto variabile 'risultato' nel main: %d",risultato);
}
