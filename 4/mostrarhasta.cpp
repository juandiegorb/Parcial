/*
*Programa: mostrar desde 0 hasta dicho valor
*Fecha: 11/09/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

//Prototipo
void entero(int n);
// funcion mostrar hasta
void entero(int n){
	if(n < 0){
		printf("ERROR!!! Numero negativo detectado");
	}
	for(int i=0; i<=n; i++){
		printf("%d ", i);
	}	
	getch();
}


int main(int argc, char *argv[]) {
	// Declaracion de variables
	int numero;	
	// Pedir datos
	printf("Ingrese un numero positivo: ");
	scanf("%d", &numero);
	entero(numero);
	
	return 0;
}
