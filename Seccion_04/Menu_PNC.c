
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación presenta un menu de opciones mediante las cuales
**              se valida si un numero es Positivo, Negativo o Cero.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Menu_PNC.c -o Menu_PNC  
**          2. ./Menu_PNC   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <stdbool.h>

bool is_positivo(double num){
	return num > 0; 
}

bool is_negativo(double num){
	return num < 0; 
}

bool is_cero(double num){
	return num == 0; 
}


int menu(){
    int opc;
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                POSITIVO - NEGATIVO - CERO                ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
    printf("[1] ¿Es positivo? \n");
    printf("[2] ¿Es negativo? \n");
    printf("[3] ¿Es cero? \n");
    printf(">>> Opcion:  ");
    scanf("%d", &opc);

    return opc;
}

int main(){

    int opc, eleccion; 
    double num;


    do{
        eleccion = menu();

        switch (eleccion){

            case 1:
                
                printf("\n>>> Digite un numero: ");
                scanf("%lf", &num);
                if(is_positivo(num)){
                    printf("--> CORRECTO, el numero ingresado es positivo (+).\n");
                }else{
                    printf("--> INCORRECTO, el numero ingresado NO es positivo.\n");
                }

                break;
            case 2:
                
                printf("\n>>> Digite un numero: ");
                scanf("%lf", &num);
                if(is_negativo(num)){
                    printf("--> CORRECTO, el numero ingresado es negativo (-).\n");
                }else{
                    printf("--> INCORRECTO, el numero ingresado NO es negativo.\n");
                }

                break;
            case 3:
                
                printf("\n>>> Digite un numero: ");
                scanf("%lf", &num);
                if(is_cero(num)){
                    printf("--> CORRECTO, el numero ingresado es cero (0).\n");
                }else{
                    printf("--> INCORRECTO, el numero ingresado NO es cero.\n");
                }

                break;
            default:
                printf("\n");
                printf("///Digito no válido/// \n");
                break;
        }

        printf("\n>>> ¿Desea realizar otra validacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);
    
    printf("\n");

    return 0; 
}