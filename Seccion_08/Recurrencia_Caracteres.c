
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación cuenta el número de apariciones de los caracteres  
**              en una cadena dada.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Recurrencia_Caracteres.c -o Recurrencia_Caracteres   
**          2. ./Recurrencia_Caracteres
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

# define MAX 50

typedef struct nodo{

    char caracter;
    struct nodo *sig;

} Caracter;

Caracter *lista_Caracter(Caracter *Lista){
    Lista = NULL;
    return Lista;
}

Caracter *agregar_caracter(Caracter *Lista, char carac){

    Caracter *nuevo_caracter, *aux;
    nuevo_caracter = (Caracter*)malloc(sizeof(Caracter));
    nuevo_caracter->caracter = carac;
    nuevo_caracter->sig = NULL;
    if(Lista == NULL){
        Lista = nuevo_caracter;
    }else{
        aux = Lista;
        while (aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo_caracter;
        
    }

    return Lista;
}

bool buscar_caracter(Caracter *Lista, char carac){
    
    Caracter *aux;

    if (Lista == NULL){
        return false;
    }else{
        aux = Lista;
        while (aux->sig != NULL){
            if(aux->caracter == carac){
                return true;
            }

            aux = aux->sig;
        }
        return false;
    }    
}

void ocurrencia_caracteres(char cadena[MAX], Caracter *Lista){

    int counter = 0;

    Caracter *aux;

    for(int i = 0; i < strlen(cadena); i++){
        if(!buscar_caracter(Lista, cadena[i])){
            Lista = agregar_caracter(Lista, cadena[i]);
        }
    }

    aux = Lista;

    while (aux != NULL){
        
        counter = 0;
        for(int j = 0; j < strlen(cadena); j++){
            if(aux->caracter == cadena[j]){
                counter++;
            }
        }
        printf("\t>Caracter '%c': %d\n", aux->caracter, counter);
        aux = aux->sig;
    }

}

void titulo(){

    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##          NUMERO DE APARICIONES DE LOS CARACTERES         ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");

}

int main(){

    
    char cadena[MAX] = "La sonrisa es la mejor respuesta para una mirada";

    Caracter *Lista = lista_Caracter(Lista);
        
    titulo();

    printf("\nCadena Original: '%s' \n", cadena);
    
    printf("\n--> Frecuencia de Caracteres: \n");
    ocurrencia_caracteres(cadena, Lista);

    printf("\n");

    return 0; 
}