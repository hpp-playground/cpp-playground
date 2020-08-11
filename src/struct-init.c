#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
  struct list *next;
};

int main(void) {
  struct list *p;
  p = (struct list *)malloc(sizeof(struct list));

  if (p->next == NULL) {
    printf("NULL");
  } else {
    printf("not NULL");
  }
  free(p);
}