
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación imprime el valor de un caracter
**              registrado por el usuario en su equivalente en codigo Ascii.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Ascii.c -o Ascii 
**          2. ./Ascii   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                       CODIGO ASCII                       ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    char caracter;

    titulo();

    printf(">>> Digite un caracter: ");
    scanf("%c", &caracter);

    printf("--> El caracter '%c' en codigo ascci es: %i \n", caracter, caracter);

    return 0; 
}