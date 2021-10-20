
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación invierte un numero 
**              registrado por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Invertir_Numero.c -o Invertir_Numero 
**          2. ./Invertir_Numero   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                     INVERTIR NUMERO                      ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
}

int main(){

    long num = -1l;
    long tmp;
    int digitos = 0;

    titulo();
    while (num < 0)
    {
        printf(">>> Digite un numero entero positivo: ");
        scanf("%ld", &num);

        if(num < 0){
            printf("///El numero no es positivo///\n");
        }    
    }
    
    tmp = num;

    while(tmp >= 1){
        tmp /= 10;
        digitos ++;  
    }

    int i = 0;

    printf("--> Numero original: '%ld' \n", num);
    printf("--> Numero impreso de manera inversa: '");
    tmp = num;
    while(i < digitos){
        printf("%ld", (tmp % 10));
        tmp/=10;
        i++;
    }

    printf("'\n");

    return 0; 
}