#include <stdio.h>
#include <stdarg.h>

#define true 1
#define false 0

int soma()
{
    int acumulador = 0;
    int a, b;

    while (true)
    {
        printf("Número: ");
        scanf("%d", &a);
        printf("Número: ");
        scanf("%d", &b);

        acumulador = a + b;
        printf("%d\n", acumulador);
        
        scanf("%d", &a);
        acumulador+= a;
        printf("%d\n", acumulador);
    }
}
