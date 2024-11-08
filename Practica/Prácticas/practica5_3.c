#include <stdio.h>
#include <stdlib.h>

#define PRODUCTOS 10
#define LONGITUD_NOMBRE 21
#define MAX_PROD 1000
int main(){
	int num;
	char nombre[PRODUCTOS][LONGITUD_NOMBRE];	
	int cantidad[MAX_PROD];

	//1.Pedimos al usuario la cantidad de productos que va a gestionar
	printf("Introduce el número de prodcutos que va a gestionar: ");
	scanf(" %d", &num); 
	
	//2.
	if(num > 10){
		printf("Solo se pueden gestionar 10 productos a la vez.\n");}
	else{
		for(int i = 0; i<num; i++){
	printf("Introduce el nombre de los productos: ");
	scanf(" %s", nombre[i]);
	}
		for(int i = 0; i<num; i++){
	printf("Introduce la cantidad de cada producto: ");
        scanf(" %d", &cantidad[i]);}
	
	}
	//INVENTARIO:
	printf("Inventario Cpmleto:\n");
	for(int i = 0;i<num; i++){
	printf("\tProducto: %s - %d\n", nombre[i], cantidad[i])			
	;}
return 0;
}

