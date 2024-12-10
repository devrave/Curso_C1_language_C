/*
Variables
*/

#include <stdio.h>

int main()
{
    char c = 'y'; // tamaño de 1 byte 0....255
    int a = 659; // 2 bytes =>  -32768...32767   (el 0 cuenta)
    short e =  32765; // 2 bytes -128....127
    unsigned int u = 25; // 2 bytes 0.....65535
    long l = 6; // 4 bytes -2147483648.. 2147483647
    float f = 76.8;
    double d = 12345.65333; // 8 bytes 
    printf("%.2lf",d);
    return 0;  // termina el prograna
}