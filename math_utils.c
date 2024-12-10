#include <stdio.h>
#include "math_utils.h"

int main()
{
    printf("Insira a operação desejada: ");
    printf("1. Soma");
    printf("2. Subtração");
    printf("3. Multiplicação");
    printf("4. Divisão");
    printf("5. Raiz quadrada");
    printf("6. Potência");
    printf("7. Fatorial");

    int operacao;
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        int a, b;
        printf("Digite os valores que deseja somar: ");
        scanf("%d", &a);
        scanf("%d", &b);

        double result;
        result = soma(a, b);

        printf("%d + %d = %g", a, b, result);
    }
}
