#include "CookElem.h"

// score is waited by reactiveness of atom
int CookElem_score_rx(CookElemCount* counter)
{
        int total = 0;
        for(int i = 0; i < CookElem_MAX; i++) total += counter->counts[i] * i;
        return total;
}

int CookElem_max(CookElemCount* counter)
{
        int i = CookElem_MAX;
        while(i--)
        {
                if(counter->counts[i]) return i;
        }
        return -1;
}
