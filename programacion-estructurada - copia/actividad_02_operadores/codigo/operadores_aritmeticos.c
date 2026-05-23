#include <stdio.h>

int main()
{
    int a = 3, b = 4, c = a++ + --b;
    printf("%d %d %d\n", a, b, c); // La salida es termina siendo 4 3 6, ya que el valor de "a" y "b" se ven mocificados en la variable "c" y al momento de imprimir resultan estos valores

    int x = 10, y = 3;
    printf("%d\n", x + y * 2);   // La primera salida será 16 ya que primero se aplica la multiplicaion de 2*3 y luego se suma a 10
    printf("%d\n", (x + y) * 2); // La segunda slida será 26 ya que primero se suman 10 y 3 y luego ese resultado se multiplica por 2

    int i = 5;
    printf("%d\n", i++); // i tiene un incremeto posfijo, por lo tanto solo se sumara 1 a su valor despues de ser llamado, el resultado será 5
    printf("%d\n", ++i); // i tiene un incremento prefijo por lo tanto le sumara 1 amtes de ser declaro, y esta antes se le hab{ía sumado uno dando un resultado de 7

    a = 5, b = 2;
    float r = a / b;
    printf("%.2f\n", r); // El resultado no tendra decimales ya que las variables son tipos de dato entero

    x = 5, y = 3; // Los espacios para la declarión de variables mejor la identación.
    if (x > y)
    { // Las llaves del if para mejor lectura
        printf("x es mayor\n");
    }
    else
    {
        printf("y es mayor\n"); // Los saltos de linea para identificar que el if terminó
    } // Urilizar llaves para cerrar el else
    printf("fin"); // Dar a conocer que ya termnió la ejecución

    return 0;
}