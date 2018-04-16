#include <stdio.h>
#include "CookCompound.h"

int main(int argc, char const *argv[]) {
        CookCompound cc;
        CookCompound* ccp = &cc;
        CookAtomList_append(ccp->atoms + CookElem_int, CookAtom_new_int(4));
        printf("len of ints is %d\n", CookCompound_LEN(ccp, CookElem_int));


        return 0;
}
