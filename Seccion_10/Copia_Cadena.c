
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación realiza una copia de una cadena 
**              mediante el uso de ficheros
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Copia_Cadena.c -o Copia_Cadena   
**          2. ./Copia_Cadena
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>


void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                        COPIA CADENA                      ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    char cadena[] = "La sonrisa es la mejor respuesta para una mirada";
    char *p_cadena, *p_copia;
        
    titulo();

    p_cadena = &cadena[0];
    p_copia = p_cadena;

    printf("\n\t>>> Cadena original: \"%s\"\n", p_cadena);
    printf("\n\t>>> Cadena copia:    \"%s\"", p_copia);   
    
    printf("\n");

    return 0; 
}