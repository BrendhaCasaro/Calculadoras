#include <stdio.h>
#include "math_utils.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    while(1)
    {
        char *input = readline("Calculadora> ");
        add_history(input);

        if(strstr(input, "+"))
        {
            for(int i = 0; i < strlen(input); i++)
            {
                if()
                {
                    printf("deu ");
                }
            }
            int valor = atoi(input);
            printf("%d\n", valor);
        }
    }
}
