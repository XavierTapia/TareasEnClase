#include <stdio.h>
#include <math.h>

int main(){
    int opc,d,e,f,e1=0,e2=0,e3=0,aa,bb,cc;
    float a,b,c,x1,x2,area;
    do{
        printf("MENU PRINCIPAL\n\n");
        printf("1. Ecuacion cuadratica.\n");
        printf("2. Area triangulo.\n");
        printf("3. Calcular edad.\n");
        printf("4. Salir.\n");
        printf("\nSeleccione su respuesta... ");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                system("cls");
                printf("Ecuacion cuadratica\n\n");
                printf("ax^2+bx+c=0\n");
                printf("\nIngrese el coeficiente 'a': ");
                scanf("%f",&a);
                printf("Ingrese el coeficiente 'b': ");
                scanf("%f",&b);
                printf("Ingrese el coeficiente 'c': ");
                scanf("%f",&c);
                x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
                x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
                printf("\nx1 = %.2f\n",x1);
                printf("x2 = %.2f\n\n",x2);
                system("pause");
                system("cls");
            break;
            case 2:
                system("cls");
                printf("Area triangulo\n\n");
                printf("ingrese la altura: ");
                scanf("%f",&a);
                printf("ingrese la base: ");
                scanf("%f",&b);
                area = (a*b)/2;
                printf("\nEl area resultante es %.2f\n\n",area);
                system("pause");
                system("cls");
            break;
            case 3:
                system("cls");
                printf("CALCULO DE EDAD\n\n");
                printf("ingrese el anio actual: ");
                scanf("%d",&d);
                printf("ingrese el mes actual: ");
                scanf("%d",&e);
                printf("ingrese el dia actual: ");
                scanf("%d",&f);

                printf("\ningrese su anio de nacimiento: ");
                scanf("%d",&aa);
                printf("ingrese su mes de nacimiento: ");
                scanf("%d",&bb);
                printf("ingrese su dia de nacimiento: ");
                scanf("%d",&cc);

                if(f<cc){
                    f=f+30;
                    b++;
                }

                if(e<bb){
                    e++;
                    a++;
                }

                e1=d-aa;
                e2=e-bb;
                e3=f-cc;

                printf("\nTiene %d anios, %d meses y %d dias\n",e1,e2,e3);
                system("pause");
                system("cls");
            break;
            case 4:
            break;
            default:
                printf("\n[ERROR]: Opcion invalida\n\n");
                system("pause");
                system("cls");
        }
    }while(opc!=4);
    return 0;
}
