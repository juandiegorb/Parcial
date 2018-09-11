/*
*Programa: suficiencia de los empleados
*Fecha: 11/09/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	// Declaracion de variables
	float porcentaje, npreguntas, preguntasAcertadas;
	char c;
	
	// Ciclo
	do{	
		// Pedir datos
		printf("Ingrese el numero de preguntas realizadas: ");
		scanf("%f", &npreguntas);
		printf("Ingrese el numero de preguntas acertadas: ");
		scanf("%f", &preguntasAcertadas);
		// Operacion
		porcentaje = (preguntasAcertadas/npreguntas)*100;
		// Preguntas logicas
		if(porcentaje > 100){
			printf("La cantidad de preguntas acertadas no concuerda con las preguntas realizadas");
		}else if(porcentaje >= 90){
			printf("La persona obtuvo: Nivel maximo");
		}else if(porcentaje >= 75 && porcentaje < 90){
			printf("La persona obtuvo: Nivel medio");
		}else if(porcentaje >= 50 && porcentaje < 75){
			printf("La persona obtuvo: Nivel medio");
		}else{
			printf("La persona obtuvo: Fuera de nivel");
		}
		getch();
		printf("\n¿Desea verificar otra persona? (s/n): ");
		fflush(stdin);
	    scanf("%c",&c);		
	} while(c == 's');
	return 0;
}
