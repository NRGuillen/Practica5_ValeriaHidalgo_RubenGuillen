#include <stdio.h>
#include <stdlib.h>

struct datos_productos{
        char nombre[20];
        int cantidad;

};

int main(){
        //PEDIR EL NÚMERO DE PRODUCTOS AL USUARIO
        int productos;
        printf("Introduce el número total de productos a gestionar: ");
        scanf("%d", &productos);
        if(productos > 10){
printf("Solo está permitida la gestión de 10 productos a la vez \n");
        }
        else {

        struct datos_productos lista_datos[productos]; //Arreglo para traer el struct al main

        for(int i = 0; i<productos; i++) { //Repetiremos el bucle de preguntarle el nombre de los productos hasta que i sea mayor que los productos
        printf("Introduce el nombre del producto: ");                                        scanf("%s", lista_datos[i].nombre);} //Cada producto se guarda en lista_datos[0] para el primero, y en el apartado de nombre especificamente. El siguiente prodcuto se guardará en lista_datos[1]... Así hasta que i sea mayor que el nº de productosque ingresó el usuario al principio
                                                                                    }


return 0;
}
