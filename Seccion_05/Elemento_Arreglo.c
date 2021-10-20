
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación permite buscar un elemento registrado por el usuartio 
**              dentro de un arreglo.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Elemento_Arreglo.c -o Elemento_Arreglo  
**          2. ./Elemento_Arreglo
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


# define MAX 10
int array[MAX];

void inicializar_arreglo(){
    for(int i = 0; i < MAX; i++){
        array[i] = rand() % 101;
    }
}

void imprimir(){
    printf(">>> Lista: ");
    for(int i = 0; i < MAX; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                   BUSQUEDA EN ARREGLO                    ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");

}

bool buscar_elemento(int valor){

    for(int i = 0; i < MAX; i++){
        if(array[i] == valor){
            return true;
        }
    }

    return false;
}

int main(){

    int opc;
    int valor;
    titulo();
    inicializar_arreglo();
    
    do{

        printf("\n");
        imprimir(); 
        printf(">>> Digite el valor que desea buscar en el arreglo: ");
        scanf("%d", &valor);

        if(buscar_elemento(valor)){
            printf("\n--> El valor '%d' SI se encuentra en el arrego. \n", valor);
        }else{
            printf("\n--> El valor '%d' NO se encuentra en el arrego. \n", valor);
        }

        printf("\n>>> ¿Desea realizar otra busqueda? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);
    }while(opc == 1);
    
    printf("\n");

    return 0; 
}