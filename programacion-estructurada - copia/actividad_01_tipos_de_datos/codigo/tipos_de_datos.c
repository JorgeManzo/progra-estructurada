#include <stdio.h>

int main()
{
    // caracteres
    char letra = 'z';
    printf("ID: letra\t Direcci%cn decimal: %lu\t Valor: %c\n", 162, (unsigned long)&letra, letra);

    char cadena[] = "Arriba las chivas";
    printf("ID: cadena\t Direcci%cn decimal: %lu\t Valor: %s\n", 162, (unsigned long)&cadena, cadena);

    signed char ch1 = -120;
    printf("ID: ch1\t\t Direcci%cn decimal: %lu\t Valor: %d\n", 162, (unsigned long)&ch1, ch1);

    unsigned char ch2 = 254;
    printf("ID: ch2\t\t Direcci%cn decimal: %lu\t Valor: %u\n", 162, (unsigned long)&ch2, ch2); // se utiliza el %u para valores unsigned

    // enteros
    int a = 777;
    printf("ID: a\t\t Direcci%cn decimal: %lu\t Valor: %i\n", 162, (unsigned long)&a, a);

    unsigned int b = 1234567;
    printf("ID: b\t\t Direcci%cn decimal: %lu\t Valor: %u\n", 162, (unsigned long)&b, b);

    short c = -32000;
    printf("ID: c\t\t Direcci%cn decimal: %lu\t Valor: %i\n", 162, (unsigned long)&c, c);

    unsigned short d = 65000;
    printf("ID: d\t\t Direcci%cn decimal: %lu\t Valor: %u\n", 162, (unsigned long)&d, d);

    long int e = 9999L;
    printf("ID: e\t\t Direcci%cn decimal: %lu\t Valor: %i\n", 162, (unsigned long)&e, e);

    unsigned long int f = 10000000UL;
    printf("ID: f\t\t Direcci%cn decimal: %lu\t Valor: %u\n", 162, (unsigned long)&f, f);

    long long int g = -90000000LL;
    printf("ID: g\t\t Direcci%cn decimal: %lu\t Valor: %i\n", 162, (unsigned long)&g, g);

    unsigned long long int h = 270000ULL;
    printf("ID: h\t\t Direcci%cn decimal: %lu\t Valor: %u\n", 162, (unsigned long)&h, h);

    // flotantes
    float i = 23.5;
    printf("ID: i\t\t Direcci%cn decimal: %lu\t Valor: %f\n", 162, (unsigned long)&i, i);

    double j = 23.777777;
    printf("ID: j\t\t Direcci%cn decimal: %lu\t Valor: %f\n", 162, (unsigned long)&j, j);

    long double k = 1.9999999000099L;
    printf("ID: k\t\t Direcci%cn decimal: %lu\t Valor: %Lf\n", 162, (unsigned long)&k, k); // Aquí por un tema de compliadores pone un montón de numero q ni al caso(#QNANO)

    return 0;
}