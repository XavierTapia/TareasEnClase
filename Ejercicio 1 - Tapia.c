#include <stdio.h>

int main(){
    int grupo,horas,edad,puntaje,anios;
    char genero;
    printf("CLASIFICACION DE EMPLEADOS\n\n");
    printf("1. Grupo 1 (aumento de sueldo).\n");
    printf("2. Grupo 2 (admision a la empresa).\n");
    printf("\nIngrese a que grupo pertenece... ");
    scanf("%d",&grupo);
    system("cls");
    switch(grupo){
        case 1:
            printf("GRUPO 1 (aumento de sueldo)\n\n");
            printf("Ingrese el numero de horas que ha laborado dentro de la empresa: ");
            scanf("%d",&horas);
            fflush(stdin);
            printf("Ingrese su genero, M para mujer o H para hombre (en mayuscula): ");
            scanf("%c",&genero);
            fflush(stdin);
            printf("Ingrese su edad: ");
            scanf("%d",&edad);
            printf("Ingrese cuantos anios ha estado dentro de la empresa: ");
            scanf("%d",&anios);
            printf("\n");

            if(horas>40)
                printf("sueldo incrementado en 50 dolares.\n");

            if((genero=='M' || edad>25) && anios>30)
                    printf("sueldo incrementado en 800 dolares.");
            else
                printf("sueldo incrementado en 100 dolares.");
        break;
        case 2:
            printf("GRUPO 2 (admision a la empresa)\n\n");
            printf("Ingrese su edad: ");
            scanf("%d",&edad);
            printf("ingrese su puntaje en la prueba: ");
            scanf("%d",&puntaje);
            printf("\n");
            if(edad > 18 && puntaje >85)
                printf("usted esta contratado\n");
            else
                printf("NO esta contratado\n");
        break;
        default:
            printf("[ERROR]: Opcion invalida\n");
            system("pause");
    }
    return 0;
}
