#ifndef COOK_OBJECT_HEAD
#define COOK_OBJECT_HEAD

#include <stdlib.h>
#include <string.h>

#define CookObject_SIZE(ckj) (sizeof(CookObject) + ckj->cap)

#define CookObject_ALLOC(capSize) (malloc(sizeof(CookObject) + capSize))

#define CookObject_SPACE(ckj) (ckj->cap - ckj->len)

#define CookObject_FITS(ckj, size) (size < (ckj->cap - ckj->len))

// Resets the object to overwrite old memory.
#define CookObject_RESET(ckj) ckj->len = 0;

// Doubles the object's capacity
#define CookObject_DBL_SIZE(ckj) do { \
                ckj = realloc(ckj, ckj->cap * 2); \
                ckj->cap *= 2; \
} while(0)

#define CookObject_EXPAND(ckj, amount) do { \
                ckj = realloc(ckj, ckj->cap + amount + 5); \
                ckj->cap += amount + 5; \
} while(0)

// General writing macro for cook objects, expands if neccesary.
#define CookObject_WRITE(ckj, ptr, amount) do { \
                if(!CookObject_FITS(ckj, amount)) CookObject_EXPAND(ckj, amount); \
                memcpy(ckj->items, ptr, amount); \
                ckj->len += amount; \
} while(0)

// Enum that represents cook types and data types
typedef enum
{

} CookElem;

// Main object structure that houses binary elements.
typedef struct
{
        size_t len;
        size_t cap;
        unsigned char items[0];
} CookObject;

#endif
