#include <stdio.h>
 
int main(void){
	int n,i,x,contatore,massimo=0;
	printf("Quanto deve esssere lunga la serie? ---> ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Inserisci il %d numero della serie:",i+1);
		scanf("%d",&x);
		if(massimo<=x){
		               massimo=x; 
		               contatore=i+1;}
	}
	printf("Massimo:%d  Posto numero:%d",massimo,contatore);
}
