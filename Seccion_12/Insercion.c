
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación permite organizar un arreglo mediante el
**              método de inserción
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Insercion.c -o Insercion  
**          2. ./Insercion
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>

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

void ordenar_arreglo(int array[MAX]){
    int pos, aux;

    for(int i = 0; i < MAX; i++){
        pos = i;
        aux = array[i];

        while((pos > 0) && (array[pos-1]> aux)){
            array[pos] = array[pos - 1];
            pos --;
        }
        array[pos] = aux;
    }
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##            METODO DE ORDENAMIENTO INSERCION              ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");


}

int main(){

    int array[MAX];
    titulo();
    inicializar_arreglo(array);
    printf(">>> Arreglo inicial: \n");
    imprimir_arreglo(array);

    ordenar_arreglo(array);
    printf(">>> Arreglo organizado: \n");
    imprimir_arreglo(array);
    printf("\n");

    return 0; 
}