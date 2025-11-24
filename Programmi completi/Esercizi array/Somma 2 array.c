#include <stdio.h>
// Esercizio somma dei 2 array
int main (void){
	int i,N,conferma=0;
	printf("--SOMMA DI DUE ARRAY--\n\n");
	printf("Inserisci la dimensione dei 2 arrey da sommare: ");
	scanf("%d",&N);
	int v1[N],v2[N],v3[N];
	
	while(conferma!=1){
	
	for(i=0;i<N;i++){
		printf("Inserisci il valore di arrey 1 di posto-->[%d]: ",i);
		scanf("%d",&v1[i]);
}
    printf("Il tuo arrey e': ");
    
    for(i=0;i<N;i++){
    	printf("%d",v1[i]);
	}
	
	printf("\nIl tuo arrey e' corretto?\n 1 conferma 0 reinserisci --->");
	scanf("%d",&conferma);
 }
   conferma=0; 
   
   while(conferma!=1){
   
    for(i=0;i<N;i++){
        printf("Inserisci il valore di arrey 2 di posto-->[%d]: ",i);
		scanf("%d",&v2[i]);
}
    printf("Il tuo arrey e': ");
    
    for(i=0;i<N;i++){
    	printf("%d ",v2[i]);
	}
	
	printf("\nIl tuo arrey e' corretto?\n 1 conferma 0 reinserisci --->");
	scanf("%d",&conferma);
}
    printf("L'arrey somma e':");
    
    for(i=0;i<N;i++){
		v3[i]=v1[i]+v2[i];
		printf(" %d ",v3[i]);
}
}

