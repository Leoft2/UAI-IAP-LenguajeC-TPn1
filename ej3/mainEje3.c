#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
EJERCICIO3
3)Ingresar tres valores, sumarlos e imprimir esa suma, 
se puede sumar de a varios operandos en la misma operación.
*/
int main(int argc, char *argv[]) {
	int n1,n2,n3,R;
	printf("Ingresar el primer numero:\n");
	scanf("%d",& n1);
	printf("Ingresar el segundo numero:\n");
	scanf("%d",& n2);
	printf("Ingresar el tercer numero:\n");
	scanf("%d",& n3);
	R = n1 + n2 + n3;
	printf("El resultado de la suma es: %d \n",R);
	
	return 0;
}
