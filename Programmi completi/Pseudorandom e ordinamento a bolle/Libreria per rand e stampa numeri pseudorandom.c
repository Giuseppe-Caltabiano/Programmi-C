#include<stdio.h>
#include<stdlib.h>// ---> rand() srand()
#include<time.h> // rand() % (max - min + 1)) + min
#define N 10
// NUMERI CASUALI O RANDOM

int main(void){
	
	srand(time(NULL));
	int v[N],i,max,min;
	max=100;
	min=50;
	printf("STAMPA DI NUMERI PSEUDORANDOM\n");
	printf("Numeri assegnati dal compilatore:\n\n");
	for(i=0;i<N;i++) {
		printf("Vettore posto %d: %d\n",i,v[i]);
}
	printf("\nNumeri pseudorandom:\n\n");
	for(i=0;i<N;i++) {
		v[i]=(rand()%(max-min+1))+min;
		printf("Vettore posto %d: %d\n",i,v[i]);
}

}
