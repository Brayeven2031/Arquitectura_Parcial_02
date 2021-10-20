
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación crea un archivo plano, guarda contenido 
**              y cierra dicho archivo
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Crear_Archivo.c -o Crear_Archivo   
**          2. ./Crear_Archivo
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                  CREACION ARCHIVO PLANO                  ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){
    
   titulo();

   FILE *fp;
 	char cadena[] = "La sonrisa es la mejor respuesta para una mirada";
 	
   printf(">>> Abriendo el fichero 'prueba.txt'\n");
 	fp = fopen ( "prueba.txt", "a+t" );
 	
   printf(">>> Escribiendo en el fichero la frase \"%s\"\n", cadena);
 	
   for(int i = 0; i < strlen(cadena); i++){
 		fputc(cadena[i], fp);
 	}
 	
   printf(">>> Cerrando el fichero 'prueba.txt'\n");
 	fclose ( fp );

   printf("\n");

   return 0; 
}