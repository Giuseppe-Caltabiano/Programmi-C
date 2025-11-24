#include<stdio.h>
#include<string.h> 
#define N 100
#define FFLUSH while(getchar()!='\n')
//VARIABILI LOCALI E GLOBALI 
//int marciiiello=123;
/*void specchio(char str[], int dim){
	int i;
	char vp[dim];
	for(i=0;i<N;i++){
		vp[i]=str[N-1];
	}
	
}*/
int prendistringa(char str[],int dim){
	int i,j=0;
    for(i=0;i<dim;i++){
    	str[i]=getchar();
    	j++;
    	if(str[i]=='\n'){
	     	str[i]='\0'; break;
   }
    	else if (i==dim-1){
    			str[i]='\0';
		}  
}
printf("La tua parola al contrario e'--->");
for(i=i;i>=0;i--){
	printf("%c",str[i]);
}
return j-1;	
}


int main(){
	char stringa[N];
	printf("PRENDI IN INPUT UNA PAROLA STAMPA AL CONTRARIO E STAMPA LA LUNGHEZZA\n\n");
    printf("Inserisci una parola/frase (massimo %d caratteri): ",N-1);
	printf("\nLa tua parola/frase e' lunga--> %d",prendistringa(stringa,N));
	return 0;
}

