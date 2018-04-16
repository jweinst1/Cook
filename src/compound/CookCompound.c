#include "CookCompound.h"

int CookCompound_most_r(CookCompound* comp)
{
        int ind = CookElem_MAX;
        while(--ind)
        {
                if(CookCompound_ELIST(comp, ind)->len) return ind;
        }
        return ind;
}
