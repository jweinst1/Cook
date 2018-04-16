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

// Calculates the reactive score of the compound.
int CookCompound_score(CookCompound* comp);

// Returns most reactive element in the compound.
int CookCompound_most_r(CookCompound* comp);

// Pops and returns an atom of some element.
CookAtom* CookCompound_get(CookCompound* comp, CookElem elem);

// Cleans the memory for the atom lists.
void CookCompound_clean(CookCompound* comp);

#endif
