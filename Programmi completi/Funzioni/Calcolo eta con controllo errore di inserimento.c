#include<stdio.h> 

int calcolaEta(int nascita, int attuale){
	if(nascita>attuale)return nascita-attuale;
    else return attuale-nascita;
	
}

int main(){
	int nascita,attuale;
	printf("CALCOLO ETA (puoi sbagliare ordine)\n");
	printf("\nInserisci data nascita:");
	scanf("%d",&nascita);
	printf("\nInserisci data attuale:");	
	scanf("%d",&attuale);
	printf("\nHai %d anni.",calcolaEta(nascita,attuale));

	return 0;
}
