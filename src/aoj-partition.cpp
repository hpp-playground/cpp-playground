
#include <stdio.h>

int main() {
  int n, pivot, tmp, i, j;
  int a[n];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);

  i = -1;
  j = n - 1;
  pivot = a[n - 1];

  for (;;) {
    while (a[++i] < pivot)
      ;
    while (i < --j && a[j] > pivot)
      ;

    printf("%d %d", i, j);
    if (i >= j) break;
    tmp = a[i];
    a[i] = a[j] a[j] = tmp;
  }
  tmp = a[i];
  a[i] = a[n - 1];
  a[n - 1] = tmp;

  for (int h = 0; h < i; h++) printf("%d ", a[h]);
  printf("[%d]", a[i]);
  for (int h = i + 1; h < n - 1; h++) printf(" %d", a[h]);
  printf(" %d\n", a[n - 1]);
}