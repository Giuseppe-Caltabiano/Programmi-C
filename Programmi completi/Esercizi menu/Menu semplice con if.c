#include<stdio.h>
int main(void){
	int scelta,a,b;
	
	do { printf("---MENU---\n1:Somma\n2:Differeza\n3:Moltiplicazione\n4:Divisione\n0:Esci\nFai la tua scelta:");
	    scanf("%d",&scelta);
	    if(scelta==1){
    	    printf("Inserisci il primo numero: ");
          	scanf("%d",&a);
            printf("Inserisci il secondo numero: ");
          	scanf("%d",&b);
    	    printf("La somma e': %d\n",a+b);
    }
	
	
	    else if(scelta==2){
		    printf("Inserisci il primo numero: ");
    	    scanf("%d",&a);
            printf("Inserisci il secondo numero: ");
         	scanf("%d",&b);
	    	printf("La sottrazione e'%d:\n",a-b);
	}
	    else if(scelta==3){
	    	printf("Inserisci il primo numero: ");
    	    scanf("%d",&a);
            printf("Inserisci il secondo numero: ");
    	    scanf("%d",&b);
	     	printf("La moltiplicazione e'%d:\n",a*b);
		}
		else if(scelta==4){
			printf("Inserisci il primo numero: ");
         	scanf("%d",&a);
            printf("Inserisci il secondo numero: ");
        	scanf("%d",&b);
	     	printf("La divisione e'%d:\n",a/b);
		}
}
     while(scelta!=0);

        
}
