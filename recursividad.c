/*
Funciones recursivas en c
*/

#include <stdio.h>
long Factorial(long numero);

int main()

{
    /*
    Ejemplo del Factorial de un número
    5! = 4*4*3*2*1
    4! = 4*3*2*1
    3! = 3*2*1
    2! = 2*1
    1! = 1
    0! = 1
    */
    int numero;
    printf("Ingresa un numero: ");
    scanf("%i", &numero);
    for(int i = 0; i <= numero; i++)
    {
        printf("%ld\n",Factorial(i));
    }
    return 0;
}

long Factorial(long numero)
{
    if(numero <= 1)
    {
        return 1;
    }else
    {
        return(numero * Factorial(numero-1));
    }
}