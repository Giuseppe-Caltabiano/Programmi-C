#include<stdio.h>
int main(){
	int voto,condotta;
    printf("CONTROLLO BOCCIATURA CON DOPPIO PARAMETRO\n\n");
    printf("Inserisci voto della materia: ");
	scanf("%d",&voto);
	
	printf("Inserisci voto condotta: ");
	scanf("%d",&condotta);
	
	if(voto>5&&condotta>6){
		  printf("Promosso");
	}else printf("Bocciato");
}
