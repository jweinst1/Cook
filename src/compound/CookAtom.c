#include "CookAtom.h"

CookAtom* CookAtom_new_int(int amount)
{
        CookAtom_int* newatom = malloc(sizeof(CookAtom_int));
        CookAtom_NULL(newatom);
        newatom->elem = CookElem_int;
        newatom->val = amount;
        return (CookAtom*)newatom;
}
