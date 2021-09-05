#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("Pon un numero del 0 al 9 y te dire su nimbre: ");

    switch(a)
    {
        case 0:
            printf("0 -> Cero. \n");
        break;
        case 1:
            printf("1 -> Uno. \n");
        break;
        case 2:
            printf("2 -> Dos. \n");
        break;
        case 3:
            printf("3 -> Tres. \n");
        break;
        case 4:
            printf("4 -> Cuatro. \n");
        break;
        case 5:
            printf("5 -> Cinco. \n");
        break;
        case 6:
            printf("6 -> Seis. \n");
        break;
        case 7:
            printf("7 -> Siete. \n");
        break;
        case 8:
            printf("8 -> Ocho. \n");
        break;
        case 9:
            printf("9 -> Nueve. \n");
        break;

        default:
            printf("No es un numero del uno al 9 tontuelo!!! \n");
    }

    return 0;
}