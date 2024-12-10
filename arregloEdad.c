/*
Se le va solicitar al usuario que ingrese el tamaño de un arreglo que va contener deiferentes edades
*/

#include <stdio.h>


int main()
{
    
    int size;
    printf("Ingrese el tamano: ");
    scanf("%i",&size);
    int arr[size];    
    for (int i = 0; i < size; i++)
    {
        printf("Edad %i:\n", i+1);
        scanf("%i",&arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("edad: %i\n", arr[i]);
    }

    return 0;
}

