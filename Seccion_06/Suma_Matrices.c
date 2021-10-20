
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación suma dos matrices.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Suma_Matrices.c -o Suma_Matrices  
**          2. ./Suma_Matrices
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>


# define MAX 5
int matriz_A [MAX][MAX];
int matriz_B [MAX][MAX];
int matriz_C [MAX][MAX];

void inicializar_matriz(int matriz [MAX][MAX]){

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            matriz[i][j] = rand() % 101;
        }
    }
}

void imprimir_matriz(int matriz [MAX][MAX]){

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void suma_matrices(int matriz_A[MAX][MAX], int matriz_B[MAX][MAX], int matriz_C[MAX][MAX]){

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j]; 
        }
    }
}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                    SUMA DE MATRICES                      ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    int opc;
    titulo();

    inicializar_matriz(matriz_A);
    printf(">>> Matriz A: \n");
    imprimir_matriz(matriz_A);

    inicializar_matriz(matriz_B);
    printf(">>> Matriz B: \n");    
    imprimir_matriz(matriz_B);

    printf(">>> Suma de matrices: \n");    
    suma_matrices(matriz_A, matriz_B, matriz_C);
    imprimir_matriz(matriz_C);
    
    printf("\n");

    return 0; 
}