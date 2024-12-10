/*
Toma de decisiones if           
operadores de igualdad
  == x es igual que y
  != x es diferente que y

  Operadores de ralacion

  > x es mayor que y
  < x es menor que y
  >= x es mayor o igual que y
  <= x es menor o igual que y
*/


#include <stdio.h>
int main()
{

    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d",&edad);

    if (edad >= 18)
    {
        printf("Eres mayor de edad");

    }else if(edad == 17){
        printf("casi eres mayor de edad");

    }
    
    else{
        printf("Eres menor de edad");

    }   

    return 0; // termmina el programa

}