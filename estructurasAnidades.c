/*

Estructuras anidadas
*/

#include <stdio.h>
#define length 2
struct owner
{
    char nombre[20];
    char direccion[30];
};
struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDog;

}dogs[length];


int main()

{

    for (int i = 0; i < length; i++)
    {
        printf("Nombre del perro: ");
        scanf("%s", dogs[i].nombre);
        printf("Edad del perro en meses: ");
        scanf("%i", &dogs[i].edadMeses);
        printf("nombre del dueño: ");
        scanf("%s", dogs[i].ownerDog.nombre);
        printf("direccion: ");
        scanf("%s",dogs[i].ownerDog.direccion);
        printf("\n");


    }
    for(int i = 0; i < length; i++)
    {
        printf("\nEl nombre del perro es: %s", dogs[i].nombre);
        printf("\nedad en meses del perro: %i", dogs[i].edadMeses);
        printf("\nEl nombre del dueño es: %s", dogs[i].ownerDog);
        printf("\nLa direccion es: %s", dogs[i].ownerDog.direccion);
        printf("\n");
    }

    return 0;
}