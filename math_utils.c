#include "math_utils.h"
#include <readline/readline.h>
#include <readline/history.h> 
#include <string.h>
#include <stdlib.h>


int main()
{
    int operacao;
    printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão");
    scanf("%d", &operacao);

    switch(operacao)
    {
        case 1:

        int valor1, valor2;
        printf("Digite os valores que deseja somar:");
        scanf("%d %d", &valor1, &valor2);

        soma(valor1, valor2);
        break;
    }
}