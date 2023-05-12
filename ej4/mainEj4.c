#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
EJERCICIO4
4) Ingresar los lados de un triángulo, calcular su perímetro e imprimirlo.
*/
int main(int argc, char *argv[]) {
	float L1,L2,L3,P;
	printf("Ingrese el 1er lado del triangulo: \n");
	scanf("%f", & L1);
	printf("Ingrese el 2do lado del triangulo: \n");
	scanf("%f", & L2);
	printf("Ingrese el 3er lado del triangulo: \n");
	scanf("%f", & L3);
	P = L1+L2+L3;
	printf("El perimetro del triangulo es: %.2f cm2",P);
	return 0;
}


	//printf("%.2f",L1);	
