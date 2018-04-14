#ifndef COOK_ATOM_HEAD
#define COOK_ATOM_HEAD
// Cook Atom, smallest unit of value in cook language.

#include <stdlib.h>
#include "CookElem.h"

// Base struct signifier for polymorphism
// This may at some point hold more modifiers
#define CookAtom_BASE CookElem elem; \
        struct CookElem* prev; \
        struct CookElem* next;

// Macro to make a base atom with some element.
#define CookAtom_MAKE(ptr, element) \
        ptr = malloc(sizeof(CookAtom)); \
        ptr->elem = element

// Connects two atoms
#define CookAtom_CONNECT(at1, at2) \
        at1->next = at2; \
        at2->prev = at1

#define CookAtom_DISCON(at1, at2) \
        at1->next = NULL; \
        at2->prev = NULL

#define CookAtom_NULL(atom) \
        atom->next = NULL; \
        atom->prev = NULL

#define CookAtomList_NULL(cal) \
        cal->front = NULL; \
        cal->back = NULL

struct CookAtom
{
        // Always at top of struct for same byte offset
        CookAtom_BASE
};
typedef struct CookAtom CookAtom;

typedef struct
{
        CookAtom_BASE
        int val;
} CookAtom_int;

typedef struct
{
        CookAtom_BASE
} CookAtom_plus;

// Doubly linked list for storing same element atoms in a compound.
typedef struct
{
        CookAtom* front;
        CookAtom* back;
        int len;
} CookAtomList;

CookAtom* CookAtom_new_int(int amount);

#endif
