#include<stdio.h>

int main(void){
	
int voto;
printf("SCOPRI SE SEI STATO PROMOSSO OPPURE NO\n");
printf("Inserisci il voto: ");
scanf("%d",&voto);

while (voto<0 || voto>10){
	printf("VOTO NON ACCETTABILE!!!\n");
	printf("Il voto deve essere compreso tra 0 e 10 riprova:");
	scanf("%d",&voto);
	
	
	
}
if(voto<6){
printf("BOCCIATO!");}
else{

printf("PROMOSSO!");
}


}


