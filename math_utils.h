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

int fatorial(int a, int b)
{
}

double raizQuadrada(double n)
{
   double recorre = n;

   for (int i = 0; n < 10; n++)
   {
      recorre = recorre / 2 + n / (2 * recorre);
   }

   return recorre;
}
