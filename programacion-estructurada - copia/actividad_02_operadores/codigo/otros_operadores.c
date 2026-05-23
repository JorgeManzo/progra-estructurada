#include <stdio.h>

int main()
{
    int a = 10, b = 26, c = 19, jera, terna, lo, lo2, pre, pre2;
    printf("Jerarquia de operaciones:\n");
    jera - a *b - (c + a) % 2;
    printf("%d\n", jera);

    printf("Operadores ternarios:\n");
    terna = a > b ? 1 : 0;
    printf("%d\n", terna);

    printf("Operadores logicos:\n");
    lo = a || b;
    lo2 = a | b;
    printf("%d \ntd\n", lo, lo2);

    printf("Operadores incremento decremento:\n");
    printf("Los yalores son %d, %d\n", ++a, b++);
    printf("Los yalores son td, %d\n", a, b);

    printf("Precedencia\n");
    pre = a + b * 2;
    printf("*d\n", pre);
    pre2 = (a + b) * 2;
    printf("*d\n", pre2);

    return 0;
}