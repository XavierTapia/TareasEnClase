#include <stdio.h>                                                                              //inclusion de las librerias

void main(){                                                                                    //llamado de la funcion main, inicio del programa
    float gC,gF,cC=0,cF=0;                                                                      //declaracion de variables
    printf("CONVERSION DE GRADOS\n\n");                                                         //titulo del programa
    printf("Ingrese los grados centigrados: ");                                                 //mensaje para ingresar los datos
    scanf("%f",&gC);                                                                            //lectura de los datos ingresados
    printf("Ingrese los grados farenheit: ");                                                   //mensaje para ingresar los datos
    scanf("%f",&gF);                                                                            //lectura de los datos ingresados
    cF=gC*1.8+32;                                                                               //proceso para convertir de C a F
    cC=(gF-32)/1.8;                                                                             //proceso para convertir de F a C
    printf("\n\nLos %.2f grados Centigrados equivalen a %.2f grados Farenheit.\n",gC,cF);       //impresion de la solucion a la conversion
    printf("Los %.2f grados farenheit equivalen a %.2f grados centigrados.\n",gF,cC);           //impresion de la solucion a la conversion
}                                                                                               //fin del programa

