
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación imprime los numeros pares e impares dentro de un rango
**              de numeros establecido por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Pares_Impares.c -o Pares_Impares   
**          2. ./Pares_Impares
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>

# define MAX 3

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                  NUMEROS PARES E IMPARES                 ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

void pares(int numero_final, int repeticion){

    if (repeticion == numero_final){
        if(repeticion % 2 == 0){
            printf("%d \n", repeticion);
        }
    }else{
        if(repeticion % 2 == 0){
            printf("%d ", repeticion);
        }
        pares(numero_final, repeticion + 1);
    }
}

void impares(int numero_final, int repeticion){

    if (repeticion == numero_final){
        if(repeticion % 2 != 0){
            printf("%d \n", repeticion);
        }
    }else{
        if(repeticion % 2 != 0){
            printf("%d ", repeticion);
        }
        impares(numero_final, repeticion + 1);
    }
}

int main(){

    int opc, numero_inicial, numero_final;

    do{
        
        titulo();

        printf(">>> Digite el numero inical del rango: ");
        scanf("%d", &numero_inicial);
        
        printf(">>> Digite el numero final del rango: ");
        scanf("%d", &numero_final);

        printf("\n--> Cadena de numeros Pares: \n");
        pares(numero_final, numero_inicial);        


        printf("\n--> Cadena de numeros Pares: \n");
        impares(numero_final, numero_inicial);

        printf("\n\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}