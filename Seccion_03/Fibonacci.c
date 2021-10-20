
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación despliega los numero de la serie fibonacci 
**              hasta la posición de un numero registrado por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Fibonacci.c -o Fibonacci  
**          2. ./Fibonacci   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                     SERIE FIBONACCI                      ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    int num;

    titulo();
    do{
        printf(">>> Digite un numero entero positivo: ");
        scanf("%d", &num);

        if(num < 0){
            printf("///El numero no es valido///\n");
        }    

    }while (num <= 0);

    int a = 0, b = 1 , c, i = 0;

    printf("--> Serie Fibonacci: 1");

    if(i < num-1){
        do{
            c = a + b;
            printf(", %d", c);
            a = b;
            b = c;
            i++;
        }while(i < num-1);
    }

    printf("\n");

    return 0; 
}