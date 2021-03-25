#include "./Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char **argv) {
  Vector v;
  init_vector(&v);

  // Integer Array
  int one = 1;
  int two = 2;

  v.pushBack(&v, &one);
  v.pushBack(&v, &two);
  printf("Integer Vector:\n");
  for (int i = 0; i < v.getSize(&v); i++) {
    printf("%d, ", (int) *((int *)v.getElem(&v, i)));
  }
  printf("\n");

  // String Array
  v.pushBack(&v, "Hello");
  v.pushBack(&v, "Word!");
  printf("String Vector:\n");
  for (int i = 0; i < v.getSize(&v); i++) {
    printf("%s, ", (char *) v.getElem(&v, i));
  }
  printf("\n\nThis is Weird:\n%d, %d, %s, %s", *((int *) v.getElem(&v, 0)), *((int *) v.getElem(&v, 1)), (char *) v.getElem(&v, 2), (char *) v.getElem(&v, 3));

  printf("\n");
  return 0;
}
