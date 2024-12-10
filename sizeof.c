/*
Operador Sizeof en c
*/


#include <stdio.h>
size_t getsize(float *puntero);
int main()

{
    float array[50];
    printf("El numero de bytes en el arreglo es: %lu \n", sizeof(array));
    printf("El numero de bytes devueltos por getsize es: %lu\n", getsize(array));
    return 0;

}

size_t getsize(float *puntero)
{

    return sizeof(puntero);
}