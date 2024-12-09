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

double raizQuadrada(double n)
{
   double inicio = 0, fim = 0;

   do
   {
      int raiz = (inicio + fim) / 2;

      if (raiz * raiz < n)
      {
         inicio = raiz;
      }
      else
      {
         fim = raiz;
      }
   }while(1);

}