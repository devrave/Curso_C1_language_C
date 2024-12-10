/*

Ejercicio: Calcular el promedio de números ingresados por el usuario
Descripción:
Escribe un programa en C que haga lo siguiente:

Solicite al usuario la cantidad de números que desea ingresar.
Use un arreglo para almacenar los números.
Calcule el promedio de los números almacenados.
Imprima los números ingresados y el promedio calculado.


*/

#include <stdio.h>

int main()

{
    int num;
    printf("Ingrese la cantidad de numeros deseada: ");
    scanf("%i",&num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("numero ingresado: %i\n", i+1);
        scanf("%i", &arr[i]);
    }
    int suma;
    float promedio;
    printf("Numeros ingresados son: ");
    for (int i = 0; i < num; i++)
    {
        printf("%i", arr[i]);
        if (i < num -1){
            printf(",");
        }
        suma += arr[i];
        promedio = (float)suma / num;
    }
    printf("\nEl promedio es: %.2f",promedio);
    




    return 0;
}