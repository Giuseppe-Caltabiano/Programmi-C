#include<stdio.h>

int main(void){
	int i,N;
	printf("Quanti numeri dispari vuoi stampare?: ");
	scanf("%d",&N);
	for(i=0;i<=N+1;i++){
		printf("Il %d numero dispari e':%d\n",i+1,i+i+1);
	}
	
}
