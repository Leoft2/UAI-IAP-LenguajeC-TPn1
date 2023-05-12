#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
EJERCICIO 7 - CALCULAR SUMA,RESTA Y PRODUCTO ENTRE VALORES
7) Ingresar dos valores, calcular su suma, su producto 
y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados
"	Numero 1(n1)
"	Numero 2(n2)
"	Resultado suma(RS)
"	Resultado producto(RP)
"	Resultado resta(RR)
*/

int main(int argc, char *argv[]) {
	int n1,n2,RS,RP,RR;
	printf("Ingrese el primer valor:\n");
	scanf("%d",&n1);
	printf("Ingrese el segundo valor:\n");
	scanf("%d",&n2);
	RS=n1+n2;
	RP=n1*n2;
	RR=n1-n2;
	printf("El resultado de la suma entre los valores es: %d \n",RS);
	printf("El resultado del producto entre los valores es: %d \n",RP);
	printf("El resultado de la resta entre los valores es: %d \n",RR);
	return 0;
}

