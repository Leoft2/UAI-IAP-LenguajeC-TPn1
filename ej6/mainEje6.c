#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
EJERCICIO 6 - CALCULAR DIAGONAL PRINCIPAL,AREA Y PERIMETRO DE RECTANGULO
6) Ingresar los lados de un rectángulo y calcular su diagonal principal, 
superficie y perímetro,imprima los resultados solicitado
"	Base (B)
"	Altura (H)
"	Diagonal principal (DP)
"	Superficie(S)
"	Perímetro(P) 
*/

int main(int argc, char *argv[]) {
	float B,H,DP,S,P;
	printf("Ingrese la medida de la base del rectangulo:\n");
	scanf("%f",&B);
	printf("Ingrese la medida de la altura del rectangulo:\n");
	scanf("%f",&H);
	DP=sqrt(B*B+H*H); //sqrt(numero) = funcion para hacer raiz cuadrada nada mas
	S=B*H;
	P=2*B+2*H;
	printf("La diagonal principal del rectangulo es: %.2f \n",DP);
	printf("La superficie del rectangulo es: %.2f \n",S);
	printf("El perimetro del rectangulo es: %.2f \n",P);
	return 0;
}

