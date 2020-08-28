#include <stdio.h>

int main(void) {
  int a[] = {0, 1, 2};

  printf("%d\n", -1 >= 0 && a[-1]);
  return 0;
}