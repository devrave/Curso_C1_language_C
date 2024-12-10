/*
palabras reservadas y conversion de tipos de datos (casting)
*/

#include <stdio.h>
int main()

{

    // int a = 80;
    // printf("entero: %i\n floatante: %.2f\n double: %.3f\n caracter: %c",a, (float)a, (double)a, (char)a);
    float suma;
    int a = 80;
    float f = 45.3;

    suma = (float)a + f;
    printf("%.1f", suma);
    return 0; // finaliza el programa
}