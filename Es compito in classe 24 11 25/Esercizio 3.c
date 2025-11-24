#include<stdio.h>

#define N 50


struct studente{
	int matricola;
	int voto;
	int cfu;
};
void inserisci_studente(struct studente v[], int contastu){
	printf("\nInserimento nuovo studente\n");
	printf("Inserisci il codice matricola: ");
	scanf("%d",&v[contastu].matricola);
	do{
	printf("Inserisci il voto da 0 a 30: ");
	scanf("%d",&v[contastu].voto);
	if(v[contastu].voto<0||v[contastu].voto>30) printf("Voto non valido reinserire.\n");
   }while(v[contastu].voto<0||v[contastu].voto>30);
	printf("Inserisci i cfu: ");
	scanf("%d",&v[contastu].cfu);
	printf("Studente inserito correttamente!\n");
}
void stampa_studenti(struct studente v[],int contastu){
	int i;
	if(contastu==0) printf("Non hai ancora inserito studenti!");
	for(i=0;i<contastu;i++) {
		printf("\nMatricola studente n.%d--> ",i+1);
		printf("%d",v[i].matricola);
		printf("\nVoto studente n.%d--> ",i+1);
		printf("%d",v[i].voto);
		printf("\nCFU studente n.%d--> ",i+1);
		printf("%d",v[i].cfu);
		
}
	
}
void media_voti(struct studente v[],int contastu){
	float somma;
	int i;
	if(contastu==0) printf("Non hai ancora inserito studenti!");
	else{
	for(i=0;i<contastu;i++){
		somma=somma+v[i].voto;
	}
	printf("La media del voto di tutti gli studenti inseriti e': %0.2f\n", somma/contastu);
}
}
void cerca_per_matricola(struct studente v[],int contastu){
	int i,cerca,trovato=0;
	if(contastu==0) printf("Non hai ancora inserito studenti!");
	else{
	printf("Inserisci la matricola che vuoi cercare: ");
	scanf("%d",&cerca);
	for(i=0;i<contastu;i++){
		if(v[i].matricola==cerca){
			printf("Lo studente che stai cercando e' il numero: %d\n",i+1);
			trovato=1;
		}	
	}
	if(trovato==0) printf("Nessun studente inserito ha quella matricola.\n");
}
}
void indice_voto_massimo(struct studente v[], int contastu){
	int massimo=0;
	int i;
	if(contastu==0) printf("Non hai ancora inserito studenti!");
	else{
	for(i=0;i<contastu;i++){
		if(massimo<v[i].voto){
			massimo=v[i].voto;
		}
	}
	for(i=0;i<contastu;i++){
		if(v[i].voto==massimo){
			printf("Lo studente numero %d ha il voto piu alto ed e': %d",i+1, massimo);
		}
	}
	
}
}
int main(){
	struct studente v[N];
	int scelta;
	int contastu=0;
	do{
		printf("\n\n-----MENU STUDENTI-----\n\n");
		printf("1-->Inserisci un nuovo studente\n");
		printf("2-->Stampa tutti gli studenti\n");
		printf("3-->Calcola e stampa la media dei voti\n");
		printf("4-->Cerca studente per matricola\n");
		printf("5-->Trova e stampa lo studente con il voto massimo\n");
        printf("0-->Esci dal programma\n");
        printf("Inserisci la tua selezione--->");
        scanf("%d",&scelta);
        switch(scelta) {
        	case 1: inserisci_studente(v,contastu); contastu++; break;
        	case 2: stampa_studenti(v,contastu); break;
        	case 3: media_voti(v,contastu); break;
        	case 4: cerca_per_matricola(v,contastu); break;
        	case 5: indice_voto_massimo(v,contastu);  break;
        	case 0: break;
	        default: printf("Selezione non valida, riprova\n\n");
}
	}while(scelta!=0);
	
}
