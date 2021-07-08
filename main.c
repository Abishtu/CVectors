#include "./Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char **argv) {
  Vector v;
  init_vector(&v);

  v.pushBack(&v, "Hello World");
  v.pushBack(&v, "Foo");

  for(int index = 0; index < v.getSize(&v); index++) {
    if(index == v.getSize(&v)-1) {
      printf("%s\n", (char *) v.getElem(&v, index));
    } else {
      printf("%s, ", (char *) v.getElem(&v, index));
    }
  }

  v.freeVector(&v);

  return 0;
}
