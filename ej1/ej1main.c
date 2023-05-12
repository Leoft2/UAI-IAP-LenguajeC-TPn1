#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
EJERCICIO 1
1) Ingresar dos valores enteros,sumarlos e imprimir esta suma 
*/

int main(int argc, char *argv[]) {
	
	int n1,n2,R;  // creamos las variables y lo definimos como int
	printf("Ingrese el primer numero:"); //printf le pedimos el valor n1
	scanf("%d",& n1); //scanf lee el valor y lo asigna a n1
	printf("Ingrese el segundo numero:"); //printf le pedimos el valor n2
	scanf("%d",& n2); //scanf lee el valor y lo asigna a n2
	R = n1 + n2; // En var R hacemos la suma de numeros
	printf("El resultado de la suma es: %d \n",R); //printf imprime el R
	
	
	return 0;
}
