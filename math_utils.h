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
   int result = 0;
   for (int i = 0; i < a; i++)
   {
      result = a * a - 1;
      a--;
   }

   return result;
}

double raizQuadrada(double n)
{
   
}
