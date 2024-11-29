#include "math_utils.h"
#include <readline/readline.h>
#include <readline/history.h> 
#include <string.h>
#include <stdlib.h>


int main()
{
    char* input = readline("Insira a operação desejada: ");
    add_history(input);

    if(strstr(input, "soma"))
    {
        soma();
    }
    
    free(input);

}