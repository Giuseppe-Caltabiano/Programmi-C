#include<stdio.h>
/* TIPI DI VARIABILI
int float double char
	*/
	
void stampaletterascelta(){
	char carattere;
	carattere = getchar();
	printf("La lettera e': %c\n",carattere);	
}

int main(){
    printf("STAMPA UNA LETTERA DATA IN INPUT\n\n");
    printf("Inserisci una lettera: ");
    stampaletterascelta();
}
