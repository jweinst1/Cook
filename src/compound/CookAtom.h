#include "CookAtom.h"

CookAtom* CookAtom_new_int(int amount)
{
        CookAtom* newatom = malloc(sizeof(CookAtom_int));
        newatom->elem = CookElem_int;
        newatom->val = amount;
        return newatom;
}
