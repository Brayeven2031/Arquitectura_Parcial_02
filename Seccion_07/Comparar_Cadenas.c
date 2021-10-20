
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación compara si dos cadenas digitadas por el usuario
**              son iguales o no.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Comparar_Cadenas.c -o Comparar_Cadenas   
**          2. ./Comparar_Cadenas
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

# define MAX 30 

int comparar_cadenas(char str_1[MAX], char str_2[MAX]){
    return strcmp(str_1, str_2);
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                    COMPARAR CADENAS                      ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    int opc;
    char str_1 [30];
    char str_2 [30];


    do{
        
        titulo();

        printf(">>> Digite una cadena caracteres: ");
        scanf("%s", str_1);
        printf(">>> Digite otra cadena de caracteres: ");
        scanf("%s", str_2);

        if(comparar_cadenas(str_1, str_2) == 0){
            printf("\n--> Las cadenas son iguales. \n");
        }else{
            printf("\n--> Las cadenas NO son iguales. \n");
        }

        strcpy(str_1, "");
        strcpy(str_2, "");

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}