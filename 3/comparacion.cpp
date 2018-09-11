/*
*Programa: mostrar el nombre que tiene mas caracteres
*Fecha: 11/09/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Funcion principal
int main(int argc, char *argv[]) {
	// Declaracion de variables
	char nombre1[50];
	char nombre2[50];
	int resultado1 , resultado2;
	
	// Pedir datos
	printf("Ingrese el primer nombre: ");
	gets(nombre1);
	printf("Ingrese el segundo nombre: ");
	gets(nombre2);
	
	// variables para almacenar cantidad de caracteres
	resultado1 = strlen(nombre1);
	resultado2 = strlen(nombre2);
	
	// preguntas logicas
	if(resultado1 > resultado2){
		printf("%s\n", nombre1);
		printf("%s", nombre2);
	}else if(resultado1 < resultado2){
		printf("%s\n", nombre2);
		printf("%s", nombre1);
	}else{
		printf("Ambas tienen la misma cantidad de caracteres\n");
		printf("%s\n", nombre2);
		printf("%s", nombre1);
	}
		
	
	return 0;
}
