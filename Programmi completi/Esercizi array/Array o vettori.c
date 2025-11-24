#include <stdio.h>

int main (void){
	/* ARRAY O VETTORE
	int vettore[7];
	//Indice di un array: parte da 0 quindi i= [0][1][2][3][4][5][6]
	vettore[0]=90;
	vettore[1]=60;
	Scorrere con il ciclo for*/
	int i,N;
	int vettore[N];
	printf("Quanto deve essere lungo il tuo array:");
	scanf("%d",&N);
	for(i=0;i<N;i++) {
		printf("Inserisci il %d numero nell'array:",i+1);
		scanf("%d",&vettore[i]);
}
	for(i=0;i<N;i++) {
		printf("Il %d numero del array e': %d \n",i+1,vettore[i]);
}
	
	
}
