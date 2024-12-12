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
TEST(test_soma) {
  int x = 5;
  int y = 10;
  ASSERT(soma(x, y) == 15);
}

int main() {
  RUN_TEST(test_soma);
  return failed;
}
