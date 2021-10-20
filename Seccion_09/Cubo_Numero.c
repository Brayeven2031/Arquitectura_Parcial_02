
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación calcula el cubo de un número registrado por el usuario
**              mediante el uso de funciones
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Cubo_Numero.c -o Cubo_Numero   
**          2. ./Cubo_Numero
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>

# define MAX 3

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                     CUBO DE UN NUMERO                    ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

double exponencial(double numero, int repeticion){
    if (repeticion == 0){
        return 1;
    }else{
        return numero * exponencial(numero , repeticion - 1);
    }
}

int main(){

    int opc;
    double numero;

    do{
        
        titulo();

        printf(">>> Digite un numero: ");
        scanf("%lf", &numero);

        printf("--> El numero %lf elevado a la tres (3) es %lf \n", numero,exponencial(numero, MAX));
        

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

   
    
    printf("\n");

    return 0; 
}