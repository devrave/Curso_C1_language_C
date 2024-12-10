/*
Instruccion switch en c
*/

#include <stdio.h>

int main()

{
    int num;
    printf("Ingresa numero de 1 a 5: ");
    scanf("%i",&num);

    switch(num)
    {
        case 1 : printf("Numero 1");
        break;
        
        case 2 : printf("Numero 2");
        break;
        
        case 3 : printf("Numero 3");
        break;
        
        case 4 : printf("Numero 4");
        break;
        
        case 5 : printf("Numero 5");
        break;

        default : printf("Opcion incorrecta");
        break;
    }
    return 0;
}