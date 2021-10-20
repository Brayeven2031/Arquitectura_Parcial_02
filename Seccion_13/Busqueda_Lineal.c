
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación permite buscar un elemento en un arreglo 
**              mediante el método de busqueda lineal
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Busqueda_Lineal.c -o Busqueda_Lineal  
**          2. ./Busqueda_Lineal
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

# define MAX 10


void inicializar_arreglo(int array[MAX]){
    for(int i = 0; i < MAX; i++){
        array[i] = rand() % 101;
    }
}

void imprimir_arreglo(int array[MAX]){
    for(int i = 0; i < MAX; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

bool buscar_elemento(int array[MAX], int elemento){
    
    for(int i = 0; i < MAX; i++){
        if(array[i]== elemento){
            return true;
        }
    }
    return false; 
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                  METODO DE BUSQUEDA LINEAL               ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    int array[MAX];
    int elemento, pos, opc;    

    do{
        
        titulo();
        inicializar_arreglo(array);
        printf(">>> Arreglo inicial: \n");
        imprimir_arreglo(array);

        printf("\n>>> Digite el elementos que desea buscar: ");
        scanf("%d", &elemento);

        if(buscar_elemento(array, elemento)){
            printf("--> El elemento %d SI se encuentra en el arreglo.\n", elemento);
        }else{
            printf("--> El elemento %d NO se encuentra en el arreglo.\n", elemento);
        }
        
        printf("\n>>> ¿Desea realizar otra busqueda? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

    printf("\n");

    return 0; 
}