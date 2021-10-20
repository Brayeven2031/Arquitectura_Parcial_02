
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación lee un archivo plano e imprime el contenido 
**              de dicho archivo
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Leer_Archivo.c -o Leer_Archivo   
**          2. ./Leer_Archivo
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                 LECTURA DE ARCHIVO PLANO                 ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){
    
    titulo();

    FILE *archivo;
    char caracter;

    printf(">>> Abriendo el fichero 'Prueba_Lectura.txt'\n");
 	archivo = fopen( "Prueba_Lectura.txt", "r" );

    if (archivo == NULL){
        printf("\nError de apertura del archivo. \n\n");
    }else{
        printf(">>> Leyendo el fichero\n");
        printf(">>> En el fichero se encuentra el siguiente mensaje: \n\n");
        while((caracter = fgetc(archivo)) != EOF){
            printf("%c",caracter);  
        }
        printf("\n");
    }
 	
    printf("\n>>> Cerrando el fichero 'Prueba_Lectura.txt'\n");
 	fclose ( archivo );

    printf("\n");

    return 0; 
}