#include <stdio.h>
#define DIM 11

int main (void){
	int i;
	double v[DIM];
	printf("Stampa della serie di fibonacci dei primi %d numeri:",DIM);
	v[0]=1;
	v[1]=2;
	printf("\n%0.f \n%0.f ",v[0],v[1]);
	for(i=2;i<DIM;i++) {
		v[i]=v[i-1]+v[i-2];
		printf("\n%0.f ",v[i]);
}
}

