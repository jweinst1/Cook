#include "CookCompound.h"

int CookCompound_score(CookCompound* comp)
{
        int score = 0;
        for(int i = 0; i < CookElem_MAX; i++)
        {
                score += comp->elems[i].len * (i + 1)
        }
        return score;
}


int CookCompound_most_r(CookCompound* comp)
{
        int ind = CookElem_MAX;
        while(--ind)
        {
                if(CookCompound_ELIST(comp, ind)->len) return ind;
        }
        return ind;
}

CookAtom* CookCompound_get(CookCompound* comp, CookElem elem)
{
        CookAtom* got =  CookAtomList_pop(CookCompound_ELIST(comp, elem));
        return got;
}

void CookCompound_clean(CookCompound* comp)
{
        for(int i = 0; i < CookElem_MAX; i++)
        {
                comp->atoms[i].len = 0;
                comp->atoms[i].front = NULL;
                comp->atoms[i].back = NULL;
        }
}
