
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación permite organizar un arreglo mediante el
**              método de ordenación shell
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Shell.c -o Shell  
**          2. ./Shell
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>

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

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##               METODO DE ORDENAMIENTO SHELL               ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");


}

int main(){

    int array[MAX];
    titulo();
    inicializar_arreglo(array);
    printf(">>> Arreglo inicial: \n");
    imprimir_arreglo(array);

    ordenar_arreglo(array);
    printf(">>> Arreglo organizado: \n");
    imprimir_arreglo(array);
    printf("\n");

    return 0; 
}