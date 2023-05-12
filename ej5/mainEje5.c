#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
EJERCICIO 5 - SACAR HIPOTENUSA,PERIMETRO Y SUPERFICIE DE UN TRIANGULO RECTANGULO
5) Ingresar dos lados de un triángulo rectángulo y calcular, 
la hipotenusa, el perímetro y la superficie, imprima los resultados solicitados
*/

int main(int argc, char *argv[]) {
	float A,B,H,P,S;
	printf("Ingrese el cateto adyacente del triangulo:\n");
	scanf("%f",&A);
	printf("Ingrese el cateto opuesto del triangulo:\n");
	scanf("%f",&B);
	H=sqrt(A*A+B*B);
	P=A+B+H;
	S=(A*B)/2;
	printf("La hipotenusa del triangulo es: %.2f \n",H);
	printf("El perimetro del triangulo es: %.2f \n",P);
	printf("La superficie del triangulo es: %.2f \n",S);
	return 0;
}
