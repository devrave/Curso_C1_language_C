/*

Arreglo de Estructuras en c
*/


#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}

perros[3];

int main()

{
    for(int i = 0; i < 2; i++)
    {
        printf("\nIngresa el nombre del perro %i: ", i+1);
        scanf("%s",&perros[i].nombre);
        printf("Ingresa la edad del perro %i: ", i+1);
        scanf("%i",&perros[i].edadMeses);
        printf("Ingresa el peso del perro  %i: ", i+1);
        scanf("%f",&perros[i].peso);        
    }

    for(int i = 0; i < 2; i++)
    {
        printf("\nEl nombre del perro %i es: %s", i+1, perros[i].nombre);
        printf("\nLa edad del perro %i es: %i", i+1, perros[i].edadMeses);
        printf("\nEl peso del perro %i es: %.2f", i+1, perros[i].peso);
    }  

    return 0;
}