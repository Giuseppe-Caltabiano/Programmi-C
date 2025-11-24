#include<stdio.h>
/* TIPI DI VARIABILI
int float double char
	*/	

void stampagiorno(){
	char g;
	printf("Inserisci l'iniziale del giorno della settimanana (M=martedi m=mercoledi):");
	g = getchar();
	
	switch(g) {
		case 'l': printf("Il giorno corrispondente e': Lunedi"); break;
		case 'M': printf("Il giorno corrispondente e': Martedi"); break;
		case 'm': printf("Il giorno corrispondente e': Meroledi"); break;
		case 'g': printf("Il giorno corrispondente e': Giovedi"); break;
		case 'v': printf("Il giorno corrispondente e': Venerdi"); break;
		case 's': printf("Il giorno corrispondente e': Sabato"); break;
		case 'd': printf("Il giorno corrispondente e': Domenica"); break;
	default: printf("Selezione non valida!");
}
}
	
int main(){
	printf("STAMPA GIORNO DELLA SETTIMANA DATA L INIZIALE\n\n");
    stampagiorno();
}
