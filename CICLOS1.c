#include <stdio.h>

int main()
{ 
    
    return 0;
}

void cicloFor(/*Aquí van los parámetros si los requieren*/)
{
   int x, z, i, r;

    s = 1;

    printf("Dame el primer numero: ");
    scanf("%i", &x);
    printf("Dame el segundo numero: ");
    scanf("%i", &z);

    for (s = x; s <= z; x++) {
        printf("  \n" ,s,);
    }

    printf("Los numeros entre %x y %z son: \n" ,x,r);

}

void cicloWhile(/*Aquí van los parámetros si los requieren*/)
{
     Código para ciclo while
}

void cicloDoWhile(/*Aquí van los parámetros si los requieren*/)
{

    int x, z;

    printf("\n Dame el primer numero: ");
    scanf("%d", &x);
    printf("\n Dame el segundo numero: ");
    scanf("%d", &z);

    if (x <= z)
        do
        {
            printf("%d", x);
            x++;
        } while (x <= z);
    else
        printf("ERROR");
}