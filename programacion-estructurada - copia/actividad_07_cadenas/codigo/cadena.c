#include <stdio.h>
#include <string.h>

int main()
{
    /*
        char origen[20];
        char destino[20];


        printf("Escribe la cadena que quieres copiar:\n");
        fgets(origen, sizeof(origen), stdin);
        strcpy(destino, origen);
        printf("\nEsta es la cadena de origen: %s\n", origen);
        printf("Esta es la cadena destino: %s", destino);


        char nombre[20];
        char apellido[20];

        printf("Escribe tu nombre\n");
        scanf("%s", &nombre);
        printf("Escribe tu apellido\n");
        scanf("%s", &apellido);

        strcat(nombre, apellido);
        printf("Tu nombre y apellido es: %s \n", nombre);

        */

    char a[20];
    char b[20];

    printf("Escribe una contrase%ca:\n", 164);
    fgets(a, sizeof(a), stdin);
    printf("Confirma la contrase%ca:\n", 164);
    fgets(b, sizeof(b), stdin);

    if (strcmp(a, b) == 0)
    {
        printf("Confirmacion exitosa");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
