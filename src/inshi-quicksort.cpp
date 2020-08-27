#include <stdio.h>

typedef struct
{
  int id;
  int score;
} student;

int student_compare(student *a, student *b){
  if (a->score > b->score) return 1;
  else if (a->score == b->score && a->id < b->id) return 1;
  else return 0;
}

int main(void) {
  student a = {1, 2};
  student b = {2, 2};
  printf("%d\n", student_compare(&a, &b));
}