#include <stdio.h>
#include "math_utils.h"

size_t caracterCount(char *input, char caracter)
{
    size_t i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == caracter)
        {
            return i;
        }

        i++;
    }
}

void splitNumbers (char *input, double *num1, double *num2)
{
    char string1[caracterCount(input, ' ')];

    // loop para encontrar os primeiros números da operação
    for (int i = 0; i < caracterCount(input, ' '); i++)
    {
        string1[i] = input[i];
    }

    // para armazenar os ultimos números da operação

    // guarda o retorno do índice até o primeiro espaço da string, pulando o espaço, o sinal e o outro espaço
    int countstring1 = caracterCount(input, ' ') + 3;
    int tamanhostring2 = strlen(input) - countstring1;

    char string2[tamanhostring2 + 1];

    for (int i = 0; i < tamanhostring2; i++)
    {
        string2[i] = input[countstring1 + i];
    }

    *num1 = strtod(string1, NULL);
    *num2 = strtod(string2, NULL);
}