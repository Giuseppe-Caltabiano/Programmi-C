#include<stdio.h>
#include<stdbool.h>
#define N 10
//con variabili booleane + migliorie
int main(){
	int i,j,k=0;
	bool presente;
	int vduplicati[N]={1,2,2,3,3,4,5,5,6,7};
	int v[N]={0,0,0,0,0,0,0,0,0,0};
	printf("Il vettore coi i duplicati e': ");
	for(i=0;i<N;i++) {
 	 printf("%d ",vduplicati[i]);
	
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
 	if(v[i]!=0){//Rimozione degli 0
 		printf("%d ",v[i]);
	 } 
	
}
}

