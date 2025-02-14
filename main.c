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
            double numero, numero2 = splitNumbers(input);
            printf("Numero: %f %f", numero, numero2);
        }
        free(input);
    }
}
