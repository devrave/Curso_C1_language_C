/*
Arreglos en c

*/

#include <stdio.h> // directiva include

#define arreglo(arr)    sizeof(arr) / sizeof(arr[0])

int main() // funcion main inicia la ejecucion del programa

{
//  int arreglo[] = {3, 4, 1, 5, 9, 7, 9, 0, 6, 5, 4, 8, 6, 8};
//     // Imprimir la longitud
//     printf("La longitud del arreglo es: %d\n", arreglo(arreglo));

int sizeA;
printf("Ingrese tamano del arreglo: \n");
scanf("%i", &sizeA);
int age[sizeA];
for(int i = 0; i < sizeA; i++)
{
    printf("ingrese el valor: %i\n", i+1);
    scanf("%i",&age[i]);

}
printf("Los valores del arreglo son:\n");
for(int i = 0; i < sizeA; i++)
{
    printf("%i\n", age[i]);

}
   
    
    return 0; // indica que el programa se terminó con exito
} // fin de la funcion main