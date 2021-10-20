
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación cuenta el numero de letras, números y caracteres especiales 
**              de una cadena registrada por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Numero_Caracteres.c -o Numero_Caracteres   
**          2. ./Numero_Caracteres
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

# define MAX 30 

int numero_letras(char cadena[MAX]){

    int counter = 0;

    for(int i = 0; i < strlen(cadena); i++){
        if(isalpha(cadena[i])){
            counter++;
        }
    }

    return counter;
}

int numero_digitos(char cadena[MAX]){

    int counter = 0;

    for(int i = 0; i < strlen(cadena); i++){
        if(isdigit(cadena[i])){
            counter++;
        }
    }

    return counter;
}

int numero_especiales(char cadena[MAX]){
    
    int counter = 0;

    for(int i = 0; i < strlen(cadena); i++){
        if(!isalnum(cadena[i])){
            counter++;
        }
    }

    return counter;
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                   NUMERO DE CARACTERES                   ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

void vaciar_cadena(char cadena[MAX]){

    for(int i = 0; i < MAX; i++){
        cadena[i] = ' ';
    }

}

int main(){

    int opc, numeros, letras, especiales;
    char cadena [30];

    vaciar_cadena(cadena);

    do{
        
        titulo();

        printf(">>> Digite una cadena caracteres: ");
        scanf("%s", cadena);
        
        printf("\nCadena Original: %s \n", cadena);
        printf("--> Numero Letras: %d\n", numero_letras(cadena));
        printf("--> Numero de Números: %d\n", numero_digitos(cadena));
        printf("--> Numero Caracteres especiales: %d\n", numero_especiales(cadena));

        vaciar_cadena(cadena);

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}