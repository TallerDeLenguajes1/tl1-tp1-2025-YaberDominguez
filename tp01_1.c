#include <stdio.h>

int main(){
    printf("Hello, World!\n");
    int numero = 1056; //Numero entero 
    int *puntero = &numero; //Puntero que señala a la direccion de memoria de numero
    printf("Contenido del puntero: %d\n",*puntero);//Contenido de la direccion de memoria la cual apunta el puntero
    printf("Direccion de memoria guardada en el puntero: %p\n",puntero);//La direccion de memoria que apunta el puntero
    printf("Direccion de memoria del numero: %p\n",&numero);//La direccion de memoria del numero
    printf("Direccion de memoria del puntero: %p\n",&puntero);//La direccion de memoria del puntero
    printf("Tamaño en bytes que utiliza el numero: %lu\n",sizeof(numero));//Contenido del numero
    
    return 0;
}