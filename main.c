#include <stdio.h>
#include "math_utils.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t caracterCount (char *input, char c)
{
    size_t i = 0;
    while (input[i] != '\0')
    {
        if(input[i] == c)
        {
            return i;
        }

        i++;
    }
}

int main()
{
    while(1)
    {
        char *input = readline("Calculadora> ");
        add_history(input);

        if(strstr(input, "+"))
        {
            for(int i = 0 ; i < caracterCount(input, ' '); i++)
            {
                char num1[caracterCount(input, ' ') + 1];
                num1[i] = input[i];
                printf("%s\n", num1);       
            }
        }
    }
}

