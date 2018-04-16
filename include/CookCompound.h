#ifndef COOK_COMPOUND_HEAD
#define COOK_COMPOUND_HEAD

#include "CookAtom.h"
// Header that defines cook compound object.

#define CookCompound_LEN(comp, elem) (comp->atoms[elem].len)

// Evaluates to a pointer to this elements list in the multiset compound.
#define CookCompound_ELIST(comp, elem) (comp->atoms + elem)

// Primary molecular structure of the cook language
typedef struct
{
        CookAtomList atoms[CookElem_MAX];
} CookCompound;

// Returns most reactive element in the compound.
int CookCompound_most_r(CookCompound* comp);

#endif
