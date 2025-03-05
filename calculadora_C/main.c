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

            printf("%f\n", soma(num1, num2));
        }

        else if (strstr(input, "-"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%f\n", subtracao(num1, num2));
        }

        else if (strstr(input, "*"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%f\n", multiplicacao(num1, num2));
        }

        else if (strstr(input, "/"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%f\n", divisao(num1, num2));
        }

        else if (strstr(input, "!"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%f\n", fatorial(num1));
        }

        else if (strstr(input, "^"))
        {
            splitNumbers(input, &num1, &num2);

            printf("%f\n", potencia(num1, num2));
        }

        else if (strstr(input, "r"))
        {
            num1 = strtod(&input[1], NULL);
        
            printf("%f\n", raizQuadrada(num1));
        }
        free(input);

    }
}