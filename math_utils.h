#include <stdio.h>
#include <stdarg.h>

int soma(int acumulador, int a, int b)
{
    while (true)
    {
        printf("Número: ");
        scanf("%d", &a);
        scanf("%d", &b);

        acumulador = a + b;
    }
}
