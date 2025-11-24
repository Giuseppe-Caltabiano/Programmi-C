#include<stdio.h> 

float media(float c, float d){
	return (c+d)/2;
}

int main(){
	float a;
	float b;
	printf("MEDIA CON FUNZIONI\n");
	printf("Inserisci primo numero:");
	scanf("%f",&a);
	printf("Inserisci secondo numero:");
	scanf("%f",&b);
	printf("\nMedia ora vale--->%0.2f",media(a,b));
	return 0;
}
