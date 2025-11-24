#include <stdio.h>

int main(void){
	int a,b,c,temp=0;
	printf("ORDINA 3 NUMERI INSERITI\n");
	printf("Iserisci il primo numero:");
	scanf("%d",&a);
	printf("Iserisci il secondo numero:");
	scanf("%d",&b);
	printf("Iserisci il terzo numero:");
	scanf("%d",&c);
	printf("\nI numeri sono a=%d  b=%d  c=%d\n", a , b , c);
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    printf("\n L ordine voluto e': %d, %d, %d",a,b,c); 
}
