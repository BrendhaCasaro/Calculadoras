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
  assert(subtracao(x, y);
}

TEST(test_multiplicacao)
{
  double x = 9;
  double y = 9;
  multiplicacao(x, y);
}

TEST(test_divisao)
{
  double x = 30;
  double y = 5;
  divisao(x, y);
}

TEST(test_fatorial)
{
  double x = 4;
  ASSERT(fatorial(x) == 6);
}

TEST(teste_raiz2)
{
  double x = 4;
  ASSERT(raizQuadrada(x) == 3);
}

int main()
{
  RUN_TEST(teste_raiz2);
  // RUN_TEST(test_fatorial);
}