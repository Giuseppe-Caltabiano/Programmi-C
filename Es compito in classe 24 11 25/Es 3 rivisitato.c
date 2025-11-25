#include<stdio.h>
#define N 50

struct studente{
	int matricola;
	int voto;
	int cfu;
};
int inserisci_studente(struct studente v[], int *contastu){
	printf("\nInserimento nuovo studente\n");
	printf("Inserisci il codice matricola: ");
	scanf("%d",&v[*contastu].matricola);
	do{
	printf("Inserisci il voto da 0 a 30: ");
	scanf("%d",&v[*contastu].voto);
	if(v[*contastu].voto<0||v[*contastu].voto>30) printf("Voto non valido reinserire.\n");
   }while(v[*contastu].voto<0||v[*contastu].voto>30);
	printf("Inserisci i cfu: ");
	scanf("%d",&v[*contastu].cfu);
	printf("Studente inserito correttamente!\n");
	//*contastu=*contastu+1;
	(*contastu)++;
	return *contastu;
}
void stampa_studenti(struct studente v[],int contastu){
	int i;
	if(contastu==0) printf("Non hai ancora inserito studenti!");
	for(i=0;i<contastu;i++) {
		printf("\n\nMatricola studente n.%d--> ",i+1);
		printf("%d",v[i].matricola);
		printf("\nVoto studente n.%d--> ",i+1);
		printf("%d",v[i].voto);
		printf("\nCFU studente n.%d--> ",i+1);
		printf("%d",v[i].cfu);
		
}
	
}
float media_voti(struct studente v[],int contastu){
	float somma;
	int i;
	for(i=0;i<contastu;i++){
		somma=somma+v[i].voto;
	}	
return somma/contastu;
}
int cerca_per_matricola(struct studente v[],int contastu){
	int i,cerca,trovato=0;
	printf("Inserisci la matricola che vuoi cercare: ");
	scanf("%d",&cerca);
	for(i=0;i<contastu;i++){
		if(v[i].matricola==cerca){
			trovato=1;
			return i+1;
		}	
	}
	if(trovato==0){
	 printf("Nessun studente inserito ha quella matricola.\n");
	return -1;
}
}
int indice_voto_massimo(struct studente v[], int contastu){
	int massimo=0;
	int i;
	for(i=0;i<contastu;i++){
		if(massimo<v[i].voto){
			massimo=v[i].voto;
		}
	}
	for(i=0;i<contastu;i++){
		if(v[i].voto==massimo){
			return i+1;
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
        	case 1: printf("Il numero di studenti inseriti e': %d",inserisci_studente(v, &contastu)); break;    
        	case 2: stampa_studenti(v,contastu); break;
        	case 3: if(contastu==0) printf("Non hai ancora inserito studenti!");
        	        else printf("La media del voto di tutti gli studenti inseriti e': %0.2f\n", media_voti(v,contastu)); 
			        break;
        	case 4: if(contastu==0) printf("Non hai ancora inserito studenti!");
			        else printf("Lo studente che stai cercando e' il numero: %d\n",cerca_per_matricola(v,contastu)); 
			     	break;
        	case 5: if(contastu==0) printf("Non hai ancora inserito studenti!");
			        else printf("Lo studente numero: '%d' ha il voto piu alto",indice_voto_massimo(v,contastu));
			        break;
        	case 0: break;
	        default: printf("Selezione non valida, riprova\n\n");
}
	}while(scelta!=0);
	
}
