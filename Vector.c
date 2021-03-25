#include "./Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


bool _resize(Vector *v, int size) {
  if (v != NULL && size > 0) {
    v->vec_attri.vec = realloc(v->vec_attri.vec,
                               sizeof(void *)*(size+1));
  } else {
    return false;
  }
  return true;
}

bool _pushBack(Vector *v, void *data) {
  if (v != NULL && data != NULL) {
    *(v->vec_attri.vec + v->vec_attri.size) = data;
    v->vec_attri.size++;

    if (v->resize(v, v->vec_attri.size) == false) {
      return false;
    }
  } else {
    return false;
  }
  return true;
}

void **_getVector(Vector *v) {
  if (v != NULL) {
    return v->vec_attri.vec;
  }

  return NULL;
}

int _getSize(Vector *v) {
  return v->vec_attri.size;
}

void *_getElem(Vector *v, int index) {
  void *data = v->vec_attri.vec[index];

  return data;
}

void init_vector(Vector *v) {

  v->pushBack = _pushBack;
  v->resize = _resize;
  v->getVector = _getVector;
  v->getSize = _getSize;
  v->getElem = _getElem;

  v->vec_attri.vec = malloc(sizeof(void *));
  v->vec_attri.size = 0;
}
