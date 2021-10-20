
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación verifica que numero es mayor entre dos número
**              registrados por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Mayor_Dos_Numeros.c -o Mayor_Dos_Numeros 
**          2. ./Mayor_Dos_Numeros   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                 MAYOR ENTRE DOS NUMEROS                  ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    long double num;
    long double num2;



    titulo();

    printf(">>> Digite un numero: ");
    scanf("%Lf", &num);

    printf(">>> Digite otro numero: ");
    scanf("%Lf", &num2);

    if(num > num2){
        printf("--> El numero '%Lf' es MAYOR que el numero '%Lf' \n", num, num2);
    }else if(num2 > num ){
        printf("--> El numero '%Lf' es MAYOR que el numero '%Lf' \n", num2, num); 
    }else{
        printf("--> Los numeros son iguales (%Lf) \n", num2); 
    }


    return 0; 
}