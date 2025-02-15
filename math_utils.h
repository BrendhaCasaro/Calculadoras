#ifndef MATH_UTILS_H
#define MATH_UTILS_H
#include <stdio.h>

double soma(double a, double b)
{
   return a + b;
}

double subtracao(double a, double b)
{
   return a - b;
}

double multiplicacao(double a, double b)
{
   return a * b;
}

double divisao(double a, double b)
{
   return a / b;
}

int fatorial(int a)
{
   if (a <= 0)
   {
      printf("ERROR\n");
   }

   int result = 0;
   int operacao = a;

   for (int i = 0; i < a; i++)
   {
      result = operacao * (a - 1);
      operacao = result;
      a--;
   }

   printf("%d", result);
   return result;
}

double potencia(double a, int base)
{
   if (a == 0)
   {
      printf("ERROR\n");
   }

   double resultado = a; // base ^ 1

   for (int i = 1; i < base; i++)
   {
      resultado = resultado * a;
   }

   return resultado;
}

double raizQuadrada(double n)
{
   double result;

   for (int i = 1; i < n; i++)
   {
      result = i * i;

      if (result == n)
      {
         result = i;
         break;
      }
   }

   return result;
}

#endif