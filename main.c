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

        if (strstr(input, "+"))
        {
            double num1, num2;
            splitNumbers(input, &num1, &num2);

            printf("%f\n", soma(num1, num2));
        }
        free(input);
    }
}
