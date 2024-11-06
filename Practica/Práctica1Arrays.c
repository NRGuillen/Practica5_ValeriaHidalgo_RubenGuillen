#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empresa{
	char continente[12];
	int sedes;
	int categorias;
	int modelos;
	int lotes;
};
int main(){

	struct empresa almacenes[100];

	struct empresa inventario;

	strcpy(inventario.continente, "Europa");
	inventario.sedes = 3;
	inventario.categorias = 4;
	inventario.modelos = 5;
	inventario.lotes = 10;
	
	printf("Continente: %s\n", inventario.continente);
	printf("Sedes: %d\n", inventario.sedes);
	printf("Categorias: %d\n", inventario.categorias);
	printf("Modelos: %d\n", inventario.modelos);
	printf("Lotes: %d\n", inventario.lotes);

	printf("Introduce el continente: ");
	scanf("%s", almacenes[1].continente);
	if(strcmp(almacenes[1].continente, "Europa")== 0){
	printf("%s\n",almacenes[1].continente);
	}else{
	printf("Introduce un continente valido.\n");
	}
	return 0;
}
