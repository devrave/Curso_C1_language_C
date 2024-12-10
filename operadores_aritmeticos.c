#include <stdio.h>


int main()
{  
    int num1, num2;
    char option;
    float calculo;
    //suma
    printf("Ingrese tipo de operación (+,-,*,/): ");
    scanf("%c",&option);  
    printf("Ingresa numero 1: ");
    scanf("%d",&num1);
    printf("Ingresa numero 2: ");
    scanf("%d",&num2);

 
    switch(option) 
    {
    case '+' : calculo = num1 + num2;
    break;
    case '-' : calculo = num1 - num2;
    break;
    case '*' : calculo = num1 * num2;
    break;
    case '/' : calculo = num1 / num2;
    break;
    }
    printf("El resultado es: %.2f", calculo);
    return calculo;  
    
}
