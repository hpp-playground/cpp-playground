#include <stdio.h>

int compare(void *a, void *b) { return *(char *)a > *(float *)b; }

int main(void) {
  double a = 100.1, b = 100.2;
  double *pa = &a;
  double *pb = &b;

  printf("%f %f\n", *pa, *pb);

  printf("%d\n", compare(pa, pb));

  return 0;
}