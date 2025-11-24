
#include<stdio.h>
#include<string.h> 
#define N 2
#define FFLUSH while(getchar()!='\n')
// Tipo STRUCT: struct nometipo{.....};
struct persona{
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
void stampastr(char str[N]){
	printf(" %s",str);
}
int main(){
	int i;
	struct persona p[N];
	printf("INSERISCI E STAMPA DUE STRUCT PERSONA CON ARRAY\n\n");
	for(i=0;i<N;i++){
		printf("Inserisci il nome della %d persona: ",i+1);
		leggistr(p[i].nome,30);
		printf("Inserisci il cognome della %d persona: ",i+1);
	    leggistr(p[i].cognome,30);
	    printf("Inserisci l eta della %d persona: ",i+1);
	    scanf("%d",&p[i].eta);
	    FFLUSH;//pulisce gli \n che lascia lo scanf 
	}
	for(i=0;i<N;i++){
		printf("\nIl nome della %d persona e': ",i+1);
	    stampastr(p[i].nome);
     	printf("\nIl cognome della %d persona e': ",i+1);
    	stampastr(p[i].cognome);
    	printf("\nL eta della %d persona e':%d\n\n",i+1,p[i].eta);
	
	
	}
	/*
	leggistr(p1.nome,30);
	leggistr(p1.cognome,30);
	scanf("%d",&p1.eta);
	printf("\nIl nome e': ");
	stampastr(p1.nome);
	printf("\nIl cognome e': ");
	stampastr(p1.cognome);
	printf("\neta e':%d\n\n",p1.eta);
	
	getchar();
	leggistr(p2.nome,30);
	leggistr(p2.cognome,30);
	scanf("%d",&p2.eta);
	printf("\nIl nome e': ");
	stampastr(p2.nome);
	printf("\nIl cognome e': ");
	stampastr(p2.cognome);
	printf("\neta e':%d",p2.eta);
	*/
	
}
