#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
EJERCICIO 2
2) Ingresar tres valores, imprimir la suma total, solo sabe sumar de a dos operandos por vez
*/

int main(int argc, char *argv[]) {
	
	int n1,n2,n3,R,RT;
	printf("Ingrese el primer numero:\n");
	scanf("%d",& n1);
	printf("Ingrese el segundo numero:\n");
	scanf("%d",& n2);
	printf("Ingrese el tercer numero:\n");
	scanf("%d",& n3);
	R = n1 + n2;
	RT = R + n3;
	printf("El resultado de la suma total es: %d \n",RT);
	return 0;
}
