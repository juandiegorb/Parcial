/*
*Programa: enviar seis enteros a una funcion y regresar su promedio
*Fecha: 11/09/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

//Prototipo
float promedio(int n[6]);
// funcion mostrar hasta
float promedio(int n[6]){
	float prome = 0;
	int suma = 0, cantidad = 0;
	for(int i=0; i<6; i++){
		suma = suma + n[i];
		cantidad = i+1;		
	}	
	prome = suma/ cantidad;
	return prome;
}
// Funcion principal
int main(int argc, char *argv[]) {
	// Declaracion de variables
	int numero[6];	
	float prom =0;
	// Pedir datos
	printf("Ingrese 6 numero\n");
	for(int i=0; i<6; i++){
		printf("Ingrese el numero %d: ", i+1);
		scanf("%d", &numero[i]);
	}
	prom = promedio(numero);
	printf("El promedio de los valores es: %.2f", prom);	
	return 0;
}
