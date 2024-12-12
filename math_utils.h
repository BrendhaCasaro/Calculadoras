#define error 1e-14

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
   if(a <= 0)
   {
      printf("ERROR")
   }
   int result = 0;
   for (int i = 0; i < a; i++)
   {
      result = a * a - 1;
      a--;
   }

   return result;
}

double potencia(double a)
{
   if (a == 0)
   {
      printf("ERROR")
      return 1;
   }

   int resultado = a; // base ^ 1

   for (int i = 1; i < a; i++)
   {
      resultado = base * resultado;
   }

   return resultado;
}

double raizQuadrada(double n)
{
}
