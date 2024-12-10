/*
Apuntadores
"Llamada a funciones por referencia"
*/

#include <stdio.h>
void cubo(int *n);

int main()

{
    int num = 5;
    printf("Valor original: %i\n", num);
    cubo(&num);
    printf("El nuevo valor: %i\n", num);    
    return 0;
}

void cubo(int *n)
{
    *n = *n* *n * *n;
}





// llamada por valor

// #include <stdio.h>
// int cubo(int num);

// int main()

// {
//     int num = 5;
//     printf("Valor original: %i\n", num);
//     num = cubo(num);
//     printf("El nuevo valor: %i\n", num);    
//     return 0;
// }

// int cubo(int num)
// {
//     return num*num*num;
// }