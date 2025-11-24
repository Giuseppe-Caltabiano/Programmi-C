#include<stdio.h>
// PUNTATORI  *p
void incrementa(int *n){
	*n=*n+1;
	printf("La n nella funzione contiene l indirizzo di x--> %p",(void*)n);
	printf("\nIndirizzo di n-->%p",(void*)&n);
}

int main(){
	int x=5;
	printf("ESERCIZIO SUI PUNTATORI CHE FA VEDERE INDIRIZZI DI MEMORIA\n\n");
	printf("Il valore di x e' %d e vogliamo incrementarlo in una funzione.\n",x);
	incrementa(&x);
    printf ("\nIl valore incrementato e': %d",x);
    printf("\nIndirizzo di x--->%p",(void*)&x);

}
