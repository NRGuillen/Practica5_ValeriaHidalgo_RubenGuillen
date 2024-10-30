#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	float suma= 0;
	float temperatura [7];
	char dias [7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

	for(int i = 0; i<7; i++){
		printf("%s:", dias[i]);
		scanf("%f", &temperatura[i]);	
	
	//Temperatura acumula todos los numeros del scanf y suma se encarga de sumar los numeros recogidos
	//

		suma += temperatura[i] ;
	
	}


		float resultado = suma / 7;
		printf("La temperatura promedio de la semana es:%.2f\n", resultado);

	for(int max = 0; max<dias[0]; max){
		printf("%d", max);
	}


	return 0;
}
