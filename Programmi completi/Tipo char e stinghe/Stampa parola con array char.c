#include<stdio.h>
#define N 5
/* TIPI DI VARIABILI
int float double char
	*/
void stampaparole(){
	int i;
	char parola[N];
	for(i=0;i<N;i++) {
		parola[i]=getchar();
}
    printf("La tua parola e': ");
	for(i=0;i<N;i++) {
		printf("%c",parola[i]);
}


	
}

int main(){
    printf("STAMPA UNA PAROLA DATA IN INPUT\n\n");
    printf("Inserisci una parola: ");
	stampaparole();
}
