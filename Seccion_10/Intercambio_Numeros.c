
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación intercambia dos numeros registrados por el usuario
**              mediante el uso de ficheros
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Intercambio_Numeros.c -o Intercambio_Numeros   
**          2. ./Intercambio_Numeros
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>


void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                    INTERCAMBIO NUMEROS                   ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    int opc, numero_01, numero_02, tmp;
    int *p_numero_01, *p_numero_02, *p_tmp;


    do{
        
        titulo();

        p_numero_01 = &numero_01;
        p_numero_02 = &numero_02;

        printf(">>> Digite un numero: ");
        scanf("%d", &numero_01);
        
        printf(">>> Digite otro numero: ");
        scanf("%d", &numero_02);

        printf("\nNumero antes del intercambio: \n");
        printf("\n\t--> Numero uno: %d", *p_numero_01);
        printf("\n\t--> Numero dos: %d\n", *p_numero_02);
        

        p_tmp = p_numero_01;
        p_numero_01 = p_numero_02;
        p_numero_02 = p_tmp;

        printf("\nNumero despues del intercambio: \n");
        printf("\n\t--> Numero uno: %d", *p_numero_01);
        printf("\n\t--> Numero dos: %d\n", *p_numero_02);
        
        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}