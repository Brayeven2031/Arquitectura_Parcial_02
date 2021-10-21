
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación elimina un caracter determinado 
**              en una cadena dada.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Ultima_Reiteracion.c -o Ultima_Reiteracion   
**          2. ./Ultima_Reiteracion
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>

# define MAX 50 


void eliminar_caracter(char cadena[MAX], char caracter){

    printf("\t-->Cadena Final: ");

    for(int i = 0; i < strlen(cadena); i++){
        
        if(cadena[i] != caracter){
            printf("%c",cadena[i]);
        }
    }
    printf("\n");
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                ELIMINAR CARACTER DE CADENA               ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    char cadena[MAX] = "La sonrisa es la mejor respuesta para una mirada";
    char caracter;

        
    titulo();

    printf("\nCadena Original: '%s' \n", cadena);
    
    printf(">>> Digite un caracter: ");
    scanf("%c", &caracter);

    printf("\n\t-->Cadena Original: '%s' \n", cadena);
    printf("\t-->Caracter de Busqueda: %c \n", caracter);
    eliminar_caracter(cadena, caracter);

    printf("\n");

    return 0; 
}
