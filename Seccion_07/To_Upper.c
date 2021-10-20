
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación convierte los caracteres de una cadena
**              registrada por el usuario a Mayusculas.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc To_Upper.c -o To_Upper   
**          2. ./To_Upper
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

# define MAX 30 

void convertir_mayusculas(char cadena[MAX], char cadena_MY[MAX]){

    for(int i = 0; i < strlen(cadena); i++){
        cadena_MY[i] = toupper(cadena[i]);
    }
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                 CONVERTIR A MAYUSCULAS                   ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

void vaciar_cadenas(char cadena[MAX], char cadena_MY[MAX]){

    for(int i = 0; i < MAX; i++){
        cadena_MY[i] = ' ';
        cadena[i] = ' ';
    }

}

int main(){

    int opc;
    char cadena [30];
    char cadena_MY [30];

    vaciar_cadenas(cadena, cadena_MY);

    do{
        
        titulo();

        printf(">>> Digite una cadena caracteres: ");
        scanf("%s", cadena);
        
        convertir_mayusculas(cadena,cadena_MY);
        printf("Cadena Original: %s \n", cadena);
        printf("Nueva Cadena: %s \n", cadena_MY);

        vaciar_cadenas(cadena, cadena_MY);

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}