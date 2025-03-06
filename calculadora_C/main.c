#include <stdio.h>
#include "math_utils.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    while (1)
    {
        char *input = readline("Calculadora> ");
        add_history(input);

        double num1, num2;

        if (strstr(input, "+"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%.1f\n", soma(num1, num2));
        }

        else if (strstr(input, "-"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%.1f\n", subtracao(num1, num2));
        }

        else if (strstr(input, "*"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%.1f\n", multiplicacao(num1, num2));
        }

        else if (strstr(input, "/"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%.1f\n", divisao(num1, num2));
        }

        else if (strstr(input, "!"))
        {
            num1 = strtod(&input[1], NULL);

            fatorial(num1);
        }

        else if (strstr(input, "^"))
        {
            splitNumbers(input, &num1, &num2);

            potencia(num1, num2);
        }

        else if (strstr(input, "r"))
        {
            num1 = strtod(&input[1], NULL);

            raizQuadrada(num1);
        }
        free(input);
    }
}