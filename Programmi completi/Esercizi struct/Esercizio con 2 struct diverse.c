#include<stdio.h>
#include<string.h>
#define FFLUSH while(getchar()!='\n')
// Tipo STRUCT: struct nometipo{.....};
struct persona{
		char nome[30];
		char cognome[30];
		int eta;
		
	};
struct persona2{
		char nome[30];
		char cognome[30];
		int eta;
		
	};
	
	void leggistr(char str[],int dim){
	int i;
    for(i=0;i<dim;i++){
    	str[i]=getchar();
    	if(str[i]=='\n'){
	     	str[i]='\0'; break;
   }
    	else if (i==dim-1){
    			str[i]='\0';
		}  
}	
  
}
void stampastr(char str[]){
	printf(" %s",str);
}
int main(){
	int i;
	struct persona p1;
	struct persona2 p2;
	printf("INSERIMENTO E STAMPA DI DUE STRUCT PERSONA\n\n");
	printf("Inserisci il nome della prima persona: ");
	leggistr(p1.nome,30);
	printf("Inserisci il cognome della prima persona: ");
	leggistr(p1.cognome,30);
	printf("Inserisci l eta della prima persona: ");
	scanf("%d",&p1.eta);
	printf("\n DATI PRIMA PERSONA:");
	printf("\nIl nome e': ");
	stampastr(p1.nome);
	printf("\nIl cognome e': ");
	stampastr(p1.cognome);
	printf("\neta e':%d\n\n",p1.eta);
	
	FFLUSH;
	
	printf("Inserisci il nome della seconda persona: ");
	leggistr(p2.nome,30);
	printf("Inserisci il cognome della seconda persona: ");
	leggistr(p2.cognome,30);
	printf("Inserisci l eta della seconda persona: ");
	scanf("%d",&p2.eta);
	printf("\n DATI SECONDA PERSONA: ");
	printf("\nIl nome e': ");
	stampastr(p2.nome);
	printf("\nIl cognome e': ");
	stampastr(p2.cognome);
	printf("\neta e':%d",p2.eta);
}
