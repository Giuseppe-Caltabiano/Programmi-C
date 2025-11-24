#include<stdio.h>
#include<stdlib.h>// ---> rand() srand()
#include<time.h> // rand() % (max - min + 1)) + min
#define N 5
/* ARGORITMI DI ORDINAMENTO;
   BUBBLE SORT
   INSORT
   QUICKSORT
   BOGOSORT
*/
void stampaarray(int v[N]){
	int i;
	printf("\nARREY ORDINATO-->");
	for(i=0;i<N;i++){
		printf("%d ",v[i]);
	}
}
void bsort(int v[N]){
	int i,j, scambio;
	for(i=0;i<N-1;i++){
    	for(j=0;j<N-1;j++){
    		if(v[j]>v[j+1]){
    		scambio=v[j];
    		v[j]=v[j+1];
    		v[j+1]=scambio;
    		
    		
    	}   		
}
}
	
	

}

int main(){
	
	srand(time(NULL));
	int v[N],i,j,max,min,scambio;
	max=100;
	min=0;
	printf("STAMPA NUMERI PSEUDORANDOM E ORDINA CON ORDINAMENTO A BOLLE\n");
	printf("\nNumeri pseudorandom:\n\n");
	for(i=0;i<N;i++) {
		v[i]=rand()%(max-min+1)+min;
		printf("Vettore posto %d: %d\n",i,v[i]);
}
    bsort(v);
    stampaarray(v);
}
