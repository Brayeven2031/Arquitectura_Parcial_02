
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación renombra un archivo plano.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Renombrar_Archivo.c -o Renombrar_Archivo   
**          2. ./Renombrar_Archivo
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                RENOMBRAR UN ARCHIVO PLANO                ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){
    
    titulo();

    FILE *fp;
 	char cadena[] = "La sonrisa es la mejor respuesta para una mirada";
 	
    printf(">>> Abriendo el fichero 'Renombrar_01.txt'\n");
 	fp = fopen ("Renombrar_01.txt", "a+t");
 	
    printf(">>> Escribiendo en el fichero la frase \"%s\"\n", cadena);
 	
    for(int i = 0; i < strlen(cadena); i++){
 		fputc(cadena[i], fp);
 	}
 	
    printf(">>> Cerrando el fichero 'Renombrar_01.txt'\n");
 	fclose ( fp );

    printf("\n>>> Renombrando el fichero 'Renombrar_01.txt' por 'Renombrar_02.txt'\n");
    if(rename("Renombrar_01.txt","Renombrar_02.txt")==0)
        printf("--> El archivo se renombro satisfactoriamente\n");
    else
        printf("/// NO se pudo renombrar el archivo ///\n");

    printf("\n");

    return 0; 
}