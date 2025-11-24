#include<stdio.h>
float calcola_media(float v[], int N){
	int i;
	float somma,media;
    for(i=0;i<N;i++){
        somma=somma+v[i];
	}
	media=somma/N;
	return media;	
}
float trova_massimo(float v[], int N){
	int i;
	int massimo=v[0];
	for(i=0;i<N;i++){
        if(massimo<v[i]) massimo=v[i];
	}
	return massimo;
}
float trova_minimo(float v[], int N){
	int i;
	int minimo=v[0];
	for(i=0;i<N;i++){
        if(minimo>v[i]) minimo=v[i];
	}
	return minimo;
}
int conta_maggiori_di_media(float v[], int N){
	int i,sopramedia=0;
	float somma,media;
    for(i=0;i<N;i++){
        somma=somma+v[i];
	}
	media=somma/N;
	
	for(i=0;i<N;i++){
        if(v[i]>media){
        	sopramedia++;
		} 
	}
	return sopramedia;
	
}

int main(){
	int N,i;
	float temp;
	printf("---Programma temperature, array e funzioni---\n\n");
	do{
	printf("Quanti giorni vuoi tenere in considerazione?: ");
	scanf("%d",&N);
	if(N<1||N>31) printf("Numero di giorni non compreso tra 1 e 31 reinserire.\n");
}while(N<1||N>31);
    float v[N];
    for(i=0;i<N;i++) {
    	printf("\nInserisci la temperatura del giorno %d: ",i+1);
    	scanf("%f",&v[i]);	
}
    printf("La media delle temperature e': %0.2f",calcola_media(v,N));
    printf("\nLa temperatura massima e': %0.2f",trova_massimo(v,N));
    printf("\nLa temperatura minima e': %0.2f",trova_minimo(v,N));
    printf("\nIl numero di giorni sopra la media e': %d",conta_maggiori_di_media(v,N));
}
