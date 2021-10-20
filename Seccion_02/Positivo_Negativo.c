
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación verifica si un número
**              registrado por el usuario es positivo o negativo.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Positivo_Negativo.c -o Positivo_Negativo 
**          2. ./Positivo_Negativo   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                   POSITIVO O NEGATIVO                    ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    long double num;


    titulo();

    printf(">>> Digite un numero: ");
    scanf("%Lf", &num);

    if(num > 0){
        printf("--> El numero '%Lf' es positivo (+) \n", num);
    }else if(num < 0){
        printf("--> El numero '%Lf' es negativo (-) \n", num); 
    }else{
        printf("--> El numero es cero (0) \n"); 

    }


    return 0; 
}