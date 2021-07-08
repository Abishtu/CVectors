#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _VECTOR_H_
#define _VECTOR_H

typedef struct {
  void **vec;
  int size;
}VectorAttributes;


typedef struct _Vector Vector;
struct _Vector {
  VectorAttributes vec_attri;
  bool (*pushBack) (Vector *, void *);
  bool (*resize) (Vector *, int);
  void **(*getVector) (Vector *);
  int (*getSize) (Vector *);
  void *(*getElem) (Vector *, int);
  void (*popElem) (Vector *, int);
  void (*freeVector) (Vector *);
};

bool _pushBack(Vector *v, void *data);
bool _resize(Vector *v, int size);
void **_getVector(Vector *v);
int _getSize(Vector *v);
void *_getElem(Vector *v, int index);
void _freeVector(Vector *v);

void init_vector(Vector *v);

#endif
