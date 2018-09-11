/*
*Programa: 15 numero si son par o impar
*Fecha: 11/09/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	// Declaracion de variables
	int numeros[15], pares = 0, impares = 0;
	
	// Pedir datos
	printf("Ingrese 15 numeros\n");
	for(int i = 0; i < 15; i++){
		printf("Ingrese el numero %d: ", i+1);
		scanf("%d", &numeros[i]);
	}	
	// Operacion
	for(int i = 0; i < 15; i++){
		if(numeros[i] == 0){			
		}else if(numeros[i]%2==0){
			pares++;
		}else{
			impares++;
		}
	}
	printf("La cantidad de numeros pares son: %d\n", pares);
	printf("La cantidad de numeros impares son: %d", impares);
		
	return 0;
}
