
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación despliega las tablas d multiplicar del 1 al 10
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Tablas_Multiplicacion.c -o Tablas_Multiplicacion  
**          2. ./Tablas_Multiplicacion   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                  TABLAS DE MULTIPLICAR                   ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    titulo();
    
    for(int i = 1; i <= 10; i++){
        printf("\t\t>>Tabla del %d: \n",i);
        printf("\n");

        for(int j = 0; j <= 10; j++){
            printf("\t\t\t> %d x %d = %d \n", i, j, (i*j));
        }
        printf("\n");
    }

    printf("\n\n");

    return 0; 
}