#include<stdio.h>
#include<stdbool.h>
#define N 10
//con variabili booleane + migliorie char
int main(){
	int i,j,k=0;
	bool presente;
	char vduplicati[N]={'1','0','0','3','3','4','5','5','6','7'};
	char v[N]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	printf("Il vettore coi i duplicati e': ");
	for(i=0;i<N;i++) {
 	 printf("%c ",vduplicati[i]);
	
}
	for(i=0;i<N;i++) {
     	presente=false;
     	
	  for(j=0;j<N;j++){
    
	  	if(vduplicati[i]==v[j]){
	  		presente=true;
	  		break;// Rimozione cicli inutili
	  	
		  }
	 
}
      if(presente==false){
     	v[k]=vduplicati[i];
     	k++; //Rimozione dei buchi
}
}
printf("\nIl vettore senza duplicati e': ");
 for(i=0;i<N;i++) {
 		printf("%c ",v[i]);
	
}
}

