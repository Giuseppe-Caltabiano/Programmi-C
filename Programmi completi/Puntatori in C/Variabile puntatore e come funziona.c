#include<stdio.h>
// PUNTATORI  *p
int main(){
	printf("VARIABILE PUNTATORE E INDIRIZZI DI MEMORIA\n");
	int x=123;
	int *puntatore=&x;// inializzazione variabile puntatore
	printf("%p",(void*)&x);//stampa indirizzo di memoria di x 
	printf("\n%p",(void*)puntatore);// stampa indirizzo di memoria a cui punta il puntatore p
	printf("\n%d",*puntatore);// stampa contenuto della memoria a cui punta il puntatore p 
}
