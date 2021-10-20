
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación permite buscar un elemento en un arreglo 
**              mediante el método de busqueda binaria
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Busqueda_Binaria.c -o Busqueda_Binaria  
**          2. ./Busqueda_Binaria
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

# define MAX 10


void inicializar_arreglo(int array[MAX]){
    for(int i = 0; i < MAX; i++){
        array[i] = rand() % 101;
    }
}

void imprimir_arreglo(int array[MAX]){
    for(int i = 0; i < MAX; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void ordenar_arreglo(int array[MAX]){
    int salto, j , k, aux;
    
    salto = MAX/2;

    while (salto>0){
        for(int i = salto; i<MAX; i++){
            j = i - salto;
            while (j>=0){
                k = j + salto;
                if(array[j] <= array[k]){
                    j = - 1;
                }else{
                    aux = array[j];
                    array[j] = array[k];
                    array[k] = aux;
                    j -= salto; 
                }
            }
            
        }
        salto = salto/2;
    }
}

bool buscar_elemento(int array[MAX], int elemento){
    int inf, sup, mitad, iterador; 

    inf = 0;
    iterador = 0;
    sup = MAX;

    while(inf <= sup && iterador < MAX){

        mitad = (inf + sup) / 2;

        if(array[mitad] == elemento){
            return true;
        }

        if(array[mitad] > elemento){
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        if(array[mitad] < elemento){
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
        iterador++;
    }

    return false;     
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                METODO DE BUSQUEDA BINARIA                ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    int array[MAX];
    int elemento, pos, opc;

    

    do{
        
        titulo();
        inicializar_arreglo(array);
        printf(">>> Arreglo inicial: \n");
        imprimir_arreglo(array);
        ordenar_arreglo(array);
        printf(">>> Arreglo organizado: \n");
        imprimir_arreglo(array);

        printf("\n>>> Digite el elementos que desea buscar: ");
        scanf("%d", &elemento);

        if(buscar_elemento(array, elemento)){
            printf("--> El elemento %d SI se encuentra en el arreglo.\n", elemento);
        }else{
            printf("--> El elemento %d NO se encuentra en el arreglo.\n", elemento);
        }
        
        printf("\n>>> ¿Desea realizar otra busqueda? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);

    printf("\n");

    return 0; 
}