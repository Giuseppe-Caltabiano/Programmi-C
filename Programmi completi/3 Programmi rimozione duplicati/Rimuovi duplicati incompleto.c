#include<stdio.h>
#define N 10
//senza variabili bool
int main(){
	int i,j,presente; 
	int vduplicati[N]={1,2,2,3,3,4,5,5,6,7};
	int v[N]={0,0,0,0,0,0,0,0,0,0};
	printf("Il vettore coi i duplicati e': ");
	for(i=0;i<N;i++) {
 	 printf("%d ",vduplicati[i]);
	
}	
	for(i=0;i<N;i++) {
		presente=1;
	
	  for(j=0;j<N;j++){
	  	if(vduplicati[i]==v[j]){
	  		presente=0;
	  	
		  }
	 
}
      if(presente==1){
     	v[i]=vduplicati[i];
}
}
    printf("\nIl vettore senza duplicati e': ");
    for(i=0;i<N;i++) {
 	 printf("%d ",v[i]);
	
}
}

