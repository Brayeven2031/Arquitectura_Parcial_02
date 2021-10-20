
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación imprime los numeros naturales hasta un número registrado por el usuario
**              mediante el uso de recursión
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Numeros_Naturales.c -o Numeros_Naturales   
**          2. ./Numeros_Naturales
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>

# define MAX 3

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                     NUMEROS NATURALES                    ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

void cadena(int numero, int repeticion){

    if (repeticion == numero){
        printf("%d \n", repeticion);
    }else{
        printf("%d - ", repeticion);
        cadena(numero, repeticion + 1);
    }
}

int main(){

    int opc, numero;

    do{
        
        titulo();

        printf(">>> Digite hasta que numero desea que se imprima la cadena: ");
        scanf("%d", &numero);
        
        printf("--> Cadena de numeros Naturales: \n");
        cadena(numero, 0);        

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}