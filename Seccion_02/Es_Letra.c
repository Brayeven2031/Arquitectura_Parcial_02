
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación verifica si un caracter
**              registrado por el usuario es una letra o un número.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Es_Letra.c -o Es_Letra 
**          2. ./Es_Letra   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <ctype.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                      ES LETRA O NO                       ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    char caracter;

    titulo();

    printf(">>> Digite solo un caracter: ");
    scanf("%c", &caracter);

    if(isalpha(caracter)){
        printf("--> El caracter '%c' es una letra \n", caracter);
    }else {
        printf("--> El caracter '%c' no es una letra \n", caracter); 
    }


    return 0; 
}