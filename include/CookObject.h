#ifndef COOK_OBJECT_HEAD
#define COOK_OBJECT_HEAD

#include <stdlib.h>

#define CookObject_SIZE(ckj) (sizeof(CookObject) + ckj->cap)

typedef struct
{
        size_t len;
        size_t cap;
        unsigned char items[0];
} CookObject;

#endif
