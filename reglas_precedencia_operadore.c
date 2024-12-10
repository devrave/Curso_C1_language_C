#include <stdio.h>

int main()

{
    int num1, num2, resultado;
    int a = 12;
    int b = 3;
    printf("Ingrese el primer valor: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&num2);
    resultado = a  * (num1 + num2) + b * (b + num2);
    printf("La el resultado es de: %d", resultado);    
    return 0;

}