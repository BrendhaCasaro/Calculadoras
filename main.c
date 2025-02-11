#include <stdio.h>
#include "math_utils.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t caracterCount (char *input, char caracter)
{
    size_t i = 0;
    while (input[i] != '\0')
    {
        if(input[i] == caracter)
        {
            //printf("retorno do caracterCount %ld\n", i);
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
            char num1[caracterCount(input, ' ')];
            //loop para encontrar os primeiros números da operação
            for(int i = 0 ; i < caracterCount(input, ' '); i++)
            {
                num1[i] = input[i];
                // printf("variavel I %d\n", i);
                // printf("Print num1 %c\n", num1[i]);
            }
            
            // para armazenar os ultimos números da operação

            //guarda o retorno do índice até o primeiro espaço da string
            int countNum1 = caracterCount(input, ' ') + 3;

            char num2[sizeof(input) - countNum2];

            for(int i = countNum1; i < caracterCount((sizeof(input) + countNum2, '\0'); i++)
            {
                num2[i] = input[i];
                printf("Print num2 %c\n", num2[i]);
            }

        }
    }
}

