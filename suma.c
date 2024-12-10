#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    printf("Ingrese el primer valor: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&num2);
    resultado = num1  + num2;
    printf("La suma de los numeros es: %d", resultado);
    return 0;
}