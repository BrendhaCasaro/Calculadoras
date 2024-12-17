#include "math_utils.h"
#include <assert.h>
#include <stdio.h>

// Test helpers
int failed = 0;

#define TEST(name) void name()
#define RUN_TEST(name)                                                         \
  printf("\n\033[1m%s\n\033[0m", #name);                                       \
  name()
#define ASSERT(expr)                                                           \
  if (!(expr)) {                                                               \
    failed = 1;                                                                \
    printf("\033[0;31mFAIL: %s\n\033[0m", #expr);                              \
  } else {                                                                     \
    printf("\033[0;32mPASS: %s\n\033[0m", #expr);                              \
  }
// End of test helpers

// Testar a funcao soma
TEST(test_soma) 
{
  int x = 5;
  int y = 10;
  ASSERT(soma(x, y) == 15);
}

TEST(test_subtracao)
{
  double x = 1000;
  double y = 2000;
  assert(subtracao(x, y) == -1000);
}

TEST(test_multiplacacao)
{
  double x = 9;
  double y = 9;
  ASSERT(multiplicacao(x, y) == 81);
}

TEST(test_divisao)
{
  double x = 30;
  double y = 5;
  ASSERT(divisao(x, y) == 6);
}

TEST(test_fatorial)
{
  double x = 3;
  ASSERT(fatorial(x) == 6);
}

TEST(test_raiz2)
{
  double x = 4;
  ASSERT(raizQuadrada(x) == 2);
}

TEST(test_potencia)
{
  double x = 4;
  double y = 2;
  ASSERT(potencia(x, y) == 8);
}
int main()
{
  RUN_TEST(test_soma);
  RUN_TEST(test_subtracao);
  RUN_TEST(test_multiplacacao);
  RUN_TEST(test_divisao);
  RUN_TEST(test_fatorial);
  RUN_TEST(test_raiz2);
  RUN_TEST(test_potencia);
}