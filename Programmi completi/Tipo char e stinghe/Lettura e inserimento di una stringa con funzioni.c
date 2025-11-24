#include<stdio.h>
#include<string.h> // LIBRERIA DELLE STRINGHE 
#define N 100
// STRINGA == ARRAY DI CARATTERI  C I A O \0, length!=dimensione array
void prendistringa(char str[],int dim){
	int i;
    for(i=0;i<dim;i++){
    	scanf("%c",&str[i]);//oppure str[i]=getchar();
    	if(str[i]=='\n'){
	     	str[i]='\0'; break;
   }
    	else if (i==dim-1){
    			str[i]='\0';
		}  
}	
}
void stampastringa(char str[N],int dim){
	printf("La stringa e': %s",str);
}
int main(){
	char stringa[N];
	printf("Inserisci una stringa lunga massimo %d (Lunghezza stringa allocata-1): ",N-1);
	prendistringa(stringa,N);
    stampastringa(stringa,N);	
}
