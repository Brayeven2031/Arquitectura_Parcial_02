
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación intercambia dos arreglos registrados 
**              mediante el uso de ficheros
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Intercambio_Arreglos.c -o Intercambio_Arreglos   
**          2. ./Intercambio_Arreglos
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>

# define MAX 15

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                   INTERCAMBIO ARREGLOS                   ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

void inicializar_arreglo(int arreglo [MAX]){

    for(int i = 0; i < MAX; i++){
        arreglo[i] = rand() % 101;
    }
}

void imprimir_arreglo(int arreglo [MAX]){

    for(int i = 0; i < MAX; i++){
        printf("%d  ", arreglo[i]);
    }

    printf("\n");
}

int main(){

    int arreglo_A [MAX];
    int arreglo_B [MAX];

    int *p_arreglo_A, *p_arreglo_B, *p_tmp;

    titulo();

    printf("\nArreglos antes del intercambio: \n");

    printf(">>> Arreglo A: \n");
    inicializar_arreglo(arreglo_A);
    imprimir_arreglo(arreglo_A);
    p_arreglo_A = &arreglo_A[0];
    
    printf(">>> Arreglo B: \n");    
    inicializar_arreglo(arreglo_B);
    imprimir_arreglo(arreglo_B);
    p_arreglo_B = &arreglo_B[0];
    
    p_tmp = p_arreglo_A;
    p_arreglo_A = p_arreglo_B;
    p_arreglo_B = p_tmp;

    printf("\n\nArreglos despues del intercambio: \n");

    printf(">>> Arreglo A: \n");
    imprimir_arreglo(p_arreglo_A);
    
    printf(">>> Arreglo B: \n");    
    imprimir_arreglo(p_arreglo_B);   
    
    printf("\n");

    return 0; 
}