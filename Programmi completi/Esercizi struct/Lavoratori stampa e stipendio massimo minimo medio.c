#include<stdio.h>
#include<string.h> 
#define N 2
#define FFLUSH while(getchar()!='\n')
// Tipo STRUCT: struct nometipo{.....};
struct lavoratore{
		char nome[30];
		char cognome[30];
		int stipendio;
		
	};
void pulisci(){while(getchar()!='\n');}	
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
	int maxs;
	int mins;
	float media=0;
	struct lavoratore L[N];
    printf("---ESERCIZIO STRUCT LAVORATORE---\n\n");
	printf("Inserimento dei dati di %d lavoratori calcola e stampa i loro dati:\n",N);
	for(i=0;i<N;i++){
		printf("\nInserisci il %d nome:",i+1);
		leggistr(L[i].nome,30);
		printf("\nInserisci il %d cognome:",i+1);
	    leggistr(L[i].cognome,30);
	    printf("\nInserisci il %d salario:",i+1);
	    scanf("%d",&L[i].stipendio);
	    pulisci();
	    
	}
	mins=L[0].stipendio;
	maxs=L[0].stipendio;
	for(i=0;i<N;i++){
	 if(L[i].stipendio>maxs){
	    	maxs=L[i].stipendio;	
		}
		if(L[i].stipendio<mins){
			mins=L[i].stipendio;
		}
	    media=media+L[i].stipendio;
}
	for(i=0;i<N;i++){
		printf("\nIl nome del %d lavoratore e': ",i+1);
	    stampastr(L[i].nome);
     	printf("\nIl cognome del %d lavoratore e': ",i+1);
    	stampastr(L[i].cognome);
    	printf("\nLo stipendio del %d lavoratore e':%d\n\n",i+1,L[i].stipendio);
	}
	printf("\nStipendio massimo: %d",maxs);
    printf("\nStipendio minimo: %d",mins);
    printf("\nMedia salari: %.2f",media/N);
}
