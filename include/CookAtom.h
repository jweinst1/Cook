#ifndef COOK_ATOM_HEAD
#define COOK_ATOM_HEAD
// Cook Atom, smallest unit of value in cook language.

// to imitate real compounds, atoms are analogous to primitive types, like integers, booleans, strings etc.

// Allows multi-typed casting and polymorphism between atoms
#define CookAtom_BASE CookElement elem;

// An element represents the type of an atom.
typedef enum
{
        CookElement_Int,
        CookElement_Add
} CookElement;

// Base Atom type for polymorphic repr
struct CookAtom
{
        CookAtom_BASE
};
typedef struct CookAtom CookAtom;


struct CookAtom_int
{
        CookAtom_BASE
        int val;
};
typedef struct CookAtom_int CookAtom_int;

struct CookAtom_add
{
        CookAtom_BASE
};
typedef struct CookAtom_add CookAtom_add;


#endif
