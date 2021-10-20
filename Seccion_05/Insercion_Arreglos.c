
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación realiza permite insertar elementos en una 
**              posición específica de un arreglos indicado por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Insercion_Arreglos.c -o Insercion_Arreglos  
**          2. ./Insercion_Arreglos   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>

# define MAX 20
int array[MAX];

void inicializar_arreglo(){
    for(int i = 0; i < MAX; i++){
        array[i] = 0;
    }
}

void agregar_elemento(int posicion, int valor){
    array[posicion-1] = valor;
}

void imprimir_arreglo(){
    printf("--> Lista: ");
    for(int i = 0; i < MAX; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int menu(){
    int opc;
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                   INSERCION EN ARREGLO                   ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
    printf("[1] Agregar. \n");
    printf("[2] Visualizar Array. \n");
    printf(">>> Opcion:  ");
    scanf("%d", &opc);

    return opc;
}

int main(){

    int pos, eleccion, opc, valor;
    inicializar_arreglo();

    do{
        eleccion = menu();

        switch (eleccion){

            case 1:

                imprimir_arreglo();

                do{
                    printf("\n>>> Digite la posición en la que desea agregar un elemento (1-20): ");
                    scanf("%d", &pos);
                }while(pos < 1 || pos > 20);

                do{
                    printf(">>> Digite un valor entero diferente de cero: ");
                    scanf("%d", &valor);
                }while(valor == 0);
                
                agregar_elemento(pos,valor);
                imprimir_arreglo();

                break;
            case 2:
                
                imprimir_arreglo();

                break;
           
            default:
                printf("\n");
                printf("///Digito no válido/// \n");
                break;
        }

        printf("\n>>> ¿Desea realizar otra insercion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);
    
    printf("\n");

    return 0; 
}