/*

Estructuras en c
*/


#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}

perro1 = {"Chkorita", 10, 3.50},
perro2 = {"Maya", 15, 4.50};

int main()

{
    printf("El peso de: %s es %.2f kg y su su edad es de %i meses\n", perro2.nombre, perro2.peso, perro2.edadMeses);

    return 0;
}