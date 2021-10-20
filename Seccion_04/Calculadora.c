
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación presenta un menu de opciones para las operaciones que 
**              se le pueden realizar a los valores digitados por el usuario.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Calculadora.c -lm -o Calculadora  
**          2. ./Calculadora   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>
#include <math.h>

double suma(double num1, double num2){
    return (num1 + num2);
}

double resta(double num1, double num2){
    return (num1 - num2);
}

double multiplicacion(double num1, double num2){
    return (num1 * num2);
}

double division(double num1, double num2){
    return num1 / num2;
}

double raiz(double num1){
    return sqrt(num1);
}

double logaritmo_natural(double num1){
    return log(num1);
}

double seno(double num1){
    return sin(num1);
}

double coseno(double num1){
    return cos(num1);
}

double tangente(double num1){
    return tan(num1);
}

int menu(){
    int opc;
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                       CALCULADORA                        ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
    printf("[1] Suma. \n");
    printf("[2] Resta. \n");
    printf("[3] Multiplicacion. \n");
    printf("[4] Division. \n");
    printf("[5] Raiz Cuadrada. \n");
    printf("[6] Logaritmo Natural. \n");
    printf("[7] Seno. \n");
    printf("[8] Coseno. \n");
    printf("[9] Tangente. \n");
    printf(">>> Opcion:  ");
    scanf("%d", &opc);

    return opc;
}

int main(){

    int opc, eleccion; 
    double num1, num2;


    do{
        eleccion = menu();

        switch (eleccion){

            case 1:
                
                printf("\n");
                printf(">>> Digite un numero: ");
                scanf("%lf", &num1);
                
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num2);
                
                printf("--> El resultado de la suma es: %lf \n", suma(num1, num2));

                break;
            case 2:
                
                printf("\n");
                printf(">>> Digite un numero: ");
                scanf("%lf", &num1);
                
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num2);
                
                printf("--> El resultado de la resta es: %lf \n", resta(num1, num2));

                break;
            case 3:

                printf("\n");
                printf(">>> Digite un numero: ");
                scanf("%lf", &num1);
                
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num2);
                
                printf("--> El resultado de la multiplicacion es: %lf \n", multiplicacion(num1, num2));

                break;
            case 4:
                
                printf("\n");
                printf(">>> Digite un numero: ");
                scanf("%lf", &num1);
                
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num2);
                
                printf("--> El resultado de la division es: %lf \n", division(num1, num2));

                break;
            case 5:
                
                printf("\n");
                printf(">>> Digite un numero: ");
                scanf("%lf", &num1);
                
                printf("--> El resultado de la raiz cuadrada es: %lf \n", raiz(num1));

                break;
            case 6:
                
                printf("\n");
                printf(">>> Digite un numero: ");
                scanf("%lf", &num1);
                
                printf("--> El resultado del logaritmo natural es: %lf \n", logaritmo_natural(num1));

                break;
            case 7:
                                
                printf("\n");
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num1);
                
                printf("--> El seno de %lf es: %lf \n", num1, seno(num1));

                break;
            case 8:
                                
                printf("\n");
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num1);
                
                printf("--> El coseno de %lf es: %lf \n", num1, coseno(num1));

                break;
            case 9:
                                
                printf("\n");
                printf(">>> Digite otro numero: ");
                scanf("%lf", &num1);
                
                printf("--> La tangente de %lf es: %lf \n", num1, tangente(num1));

                break;
            default:
                printf("\n");
                printf("///Digito no válido/// \n");
                break;
        }

        printf("\n>>> ¿Desea realizar otra operacion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);
    
    printf("\n");

    return 0; 
}