
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación calcula el área de un triángulo acorde
**              a los datos registrados por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Area_Triangulo.c -o Area_Triangulo
**          2. ./Area_Triangulo   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################\n");
    printf("##                                                          ##\n");
    printf("##                   AREA DE UN TRIANGULO                   ##\n");
    printf("##                                                          ##\n");
    printf("##############################################################\n");
}

int main(){

    float base, altura, area;
    titulo();

    printf("\n>> Digite el valor de la base del triangulo: ");
    scanf("%f", &base);
    
    printf("\n>> Digite el valor de la altura del triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\n--> El area del triangulo es: %f \n", area);

    return 0; 
}

