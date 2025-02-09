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
            char *num1 = strchr(input, ' ');
            
            if (num1 == NULL) {
                printf("Não há espaço na string!\n");
                return 1;


            char *ponteiro = input;
            while(*ponteiro != ' ' && *ponteiro != '\0')
            {
                ponteiro++;
            }

            if(*ponteiro == ' ')
            {
                ponteiro = ponteiro + 2;
            }

            char *num2 = strdup(ponteiro)

        }
    }
}
}
