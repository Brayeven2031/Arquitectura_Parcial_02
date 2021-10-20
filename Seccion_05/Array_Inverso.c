
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación permite invertir los elementos de un arreglo
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Array_Inverso.c -o Array_Inverso  
**          2. ./Array_Inverso
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>

# define MAX 20
int array[MAX];

void inicializar_arreglo(){
    for(int i = 0; i < MAX; i++){
        array[i] = rand() % 11;
    }
}

void imprimir(){
    printf("--> Lista Original: ");
    for(int i = 0; i < MAX; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void imprimir_inverso(){
    printf("--> Lista Inversa: ");
    for(int i = MAX - 1 ; i >= 0; i--){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                      ARREGLO INVERSO                     ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    titulo();
    inicializar_arreglo();
    imprimir();
    imprimir_inverso();
    
    printf("\n");

    return 0; 
}