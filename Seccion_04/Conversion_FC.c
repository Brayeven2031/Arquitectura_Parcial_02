
/*
** Materia: Arquitectura de computadores
** Profesor: John Jairo Corredor Franco 
**
** Autores: Roxanyffer Andreina Velasco Contreras & Brayan Stiven Castañeda Cruz
**
** Descripción: El programa a continuación realiza la conversion de grados Celcius 
**              a grados Fahrenheit y de grados Fahrenheit a grados Celcius.
**
** Nota: Para ejecutar este programa se necesita de un entorno linux y registrar 
**       en la terminal los siguientes comandos:
**          1. gcc Conversion_FC.c -o Conversion_FC  
**          2. ./Conversion_FC   
**
** Fecha: 16/10/2021           
*/

#include <stdio.h>

void c_f(){
	double c = 0.0; 
	double f = 0.0; 
	
	printf("\n>>> Convertidor de Celsius a Fahrenheit\n");
	printf(">>>Ingrese la Temperatura en °C: ");
    scanf("%lf", &c);

	f = (c * 9 / 5) + 32;
	
	printf("--> %lf grados Celsius son %lf grados Fahrenheit.\n", c, f);
}

void f_c(){
	double c = 0.0; 
	double f = 0.0; 
	
	printf("\n>>> Convertidor de Fahrenheit a Celsius-\n");
	printf(">>>Ingrese la Temperatura en °F: ");
    scanf("%lf", &f);

	c = (f - 32) * 5/9;
	
	printf("--> %lf grados Fahrenheit son %lf grados Celsius.\n", f, c);
}

int menu(){
    int opc;
    printf("\n##############################################################");
    printf("\n##                                                          ##");
    printf("\n##                   CONVERTIDOR °F - °C                    ##");
    printf("\n##                                                          ##");
    printf("\n##############################################################\n");
    printf("\n");
    printf("[1] Fahrenheit a Celcius. \n");
    printf("[2] Celcius a Fahrenheit. \n");
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
                
                c_f();

                break;
            case 2:
                
                f_c();

                break;
            default:
                printf("\n");
                printf("///Digito no válido/// \n");
                break;
        }

        printf("\n>>> ¿Desea realizar otra conversion? digite '1' para SI y '0' para NO \n");
        scanf("%d", &opc);

    }while (opc == 1);
    
    printf("\n");

    return 0; 
}