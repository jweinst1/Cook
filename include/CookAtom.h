#ifndef COOK_ATOM_HEAD
#define COOK_ATOM_HEAD
// Cook Atom, smallest unit of value in cook language.

#include <stdlib.h>
#include "CookElem.h"

// Base struct signifier for polymorphism
// This may at some point hold more modifiers
#define CookAtom_BASE CookElem elem;

// Macro to make a base atom with some element.
#define CookAtom_MAKE(ptr, element) \
        ptr = malloc(sizeof(CookAtom)); \
        ptr->elem = element

typedef struct
{
        // Always at top of struct for same byte offset
        CookAtom_BASE
} CookAtom;

typedef struct
{
        CookAtom_BASE
        int val;
} CookAtom_int;

typedef struct
{
        CookAtom_BASE
} CookAtom_plus;


CookAtom* CookAtom_new_int(int amount);

#endif
