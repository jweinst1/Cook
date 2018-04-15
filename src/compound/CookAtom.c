#include "CookAtom.h"

CookAtom* CookAtom_new_int(int amount)
{
        CookAtom_int* newatom = malloc(sizeof(CookAtom_int));
        CookAtom_NULL(newatom);
        newatom->elem = CookElem_int;
        newatom->val = amount;
        return (CookAtom*)newatom;
}

void CookAtomList_append(CookAtomList* cal, CookAtom* ca)
{
        switch(cal->len)
        {
        case 0:
                cal->front = ca;
                cal->back = ca;
                break;
        case 1:
                CookAtom_CONNECT(cal->front, ca);
                cal->back = ca;
                break;
        default:
                CookAtom_CONNECT(cal->back, ca);
                cal->back = ca;
        }
        cal->len++;
}

CookAtom* CookAtomList_pop(CookAtomList* cal)
{
        CookAtom* popped;
        switch(cal->len)
        {
        case 0:
                // Bad call, pop on empty list.
                popped = NULL;
                break;
        case 1:
                popped = cal->front;
                CookAtomList_CLEAR(cal);
                break;
        default:
                popped = cal->back;
                CookAtom_DISCON(cal->back->prev, cal->back);
                cal->back = cal->back->prev;
                cal->len--;

        }

        return popped;
}
