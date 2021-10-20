
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación cuenta el número de apariciones de un caracter determinado 
**              en una cadena dada.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Conteo_Caracter.c -o Conteo_Caracter   
**          2. ./Conteo_Caracter
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

# define MAX 50 

int ocurrencia_caracter(char cadena[MAX], char caracter){

    int counter = 0;

    for(int i = 0; i < strlen(cadena); i++){
        if(cadena[i] == caracter){
            counter++;
        }
    }

    return counter;
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##           NUMERO DE APARICIONES DE UN CARACTER           ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    int opc;
    char cadena[MAX] = "La sonrisa es la mejor respuesta para una mirada";
    char caracter;

    do{
        
        titulo();

        printf("\nCadena Original: '%s' \n", cadena);
        
        printf(">>> Digite el caracter a buscar en la cadena anterior: ");
        caracter = getchar();


        printf("\n\nCadena Original: '%s' \n", cadena);
        printf("Caracter de Busqueda: %c \n", caracter);
        printf("--> Frecuencia Caracter: %d\n", ocurrencia_caracter(cadena, caracter));

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}