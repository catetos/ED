#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    int a;
    char c;
    float p;
    char s;
    float o;
    char op;
    printf("\n BIENVENID@ AL LA CALCULADORA FELIZ, LA UNICA QUE TE SONRIE AL HACER UNA OPERACION :D");
    printf("\n DAME EL PRIMER VALOR: ");
    scanf("%e", &o);
    printf("\n DAME EL SEGUNDO VALOR:");
    scanf("%e", &p);
    
    printf("\n SELECCIONA LA OPERACION QUE DESEAS REALIZAR CON EL NUMERO REPRESENTADO: ");
    printf("\n 1. SUMA");
    printf("\n 2. RESTA");
    printf("\n 3. MULTIPLICACION");
    printf("\n 4. DIVISION");
    printf("\n 5. POTENCIA");
    printf("\n 6. MODULO");
    printf("\n 7. RAIZ CUADRADA");
    printf("\n -> : ");
    scanf("%x", &op);

    switch(op)
    {

        case 1:
            r=o+p;
            printf("\n El resultado de esta SUMA es: %d", r);
        break;
        case 2:
            r=o-p;
            printf("\n El resultado de esta RESTA es: %d", r);
        break;
        case 3:
            r=o*p;
            printf("\n El resultado de esta MULTIPLICACION es: %d", r);
        break;
        case 4:
            r=o/p;
            printf("\n El resultado de esta DIVISION es: %d", r);
        break;
        case 5:
            r=pow(o,p);
            printf("\n El resultado de esta POTECIA es: %d", r);
        break;
        case 6:
            printf("6 -> Seis");
        break;

        default:
            printf("INTRODUCE UNA OPERACION VALIDA!");
    }


    return 0;
}