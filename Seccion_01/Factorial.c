
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación calcula el factorial de un número
**              registrado por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Factorial.c -o Factorial
**          2. ./Factorial   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                  FACTORIAL DE UN NUMERO                  ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

long factorial(int numero){

    if(numero == 0){
        return 1;
    }else{
        return numero * factorial(numero-1);
    }
}


int main(){

    int numero = 0l; 
    long fac = 0l;
    titulo();

    do{
        printf(">>> Digite un numero entero positivo: ");
        scanf("%d", &numero);
    }while (numero < 0);

    fac = factorial(numero);

    printf("--> El factorial de %d es: %ld \n", numero, fac);

    return 0; 
}