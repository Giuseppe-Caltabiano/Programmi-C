#include<stdio.h>
int main(void){
	int scelta,a,b;
	float c,d;
	do { printf("---MENU---\n1:Somma\n2:Differeza\n3:Moltiplicazione\n4:Divisione\n0:Esci\nFai la tua scelta:");
	     scanf("%d",&scelta);
	     switch(scelta) {
	     	case 1: printf("Inserisci il primo numero: ");
                    scanf("%d",&a);
                    printf("Inserisci il secondo numero: ");
       	            scanf("%d",&b);
                	printf("La somma e': %d\n",a+b);
                	break;
            case 2: printf("Inserisci il primo numero: ");
                    scanf("%d",&a);
                    printf("Inserisci il secondo numero: ");
       	            scanf("%d",&b);
		            printf("La sottrazione e'%d:\n",a-b);  
		            break;
			case 3: printf("Inserisci il primo numero: ");
                    scanf("%d",&a);
                    printf("Inserisci il secondo numero: ");
                  	scanf("%d",&b);
	            	printf("La moltiplicazione e'%d:\n",a*b);	
	            	break;
			case 4: printf("Inserisci il primo numero: ");
                    scanf("%f",&c);
                    printf("Inserisci il secondo numero: ");
                 	scanf("%f",&d);
	            	printf("La divisione e'%0.2f:\n",c/d);		
 					break;	  	
        	case 0: break;
        		
			default: printf("Il numero inserito non e' corretto\n");}
}

     while(scelta!=0);

        
}
