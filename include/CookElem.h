#ifndef COOK_ELEM_HEAD
#define COOK_ELEM_HEAD
// Header that handles cook elements

#include <stdlib.h>

// Represents highest int represented by a cook element
#define CookElem_MAX 1

#define CookElem_INC(cnt, elem) (cnt.counts[elem]++)

#define CookElem_IN(cnt, elem) (cnt.counts[elem] != 0)
// Clears all the current counts
#define CookElem_CLEAR(cnt) for(int i =0; i< CookElem_MAX; i++) cnt.counts[i] = 0

typedef enum
{
        CookElem_int
} CookElem;

// Counter struct that allows the multiplicties of elements to be counted
typedef struct
{
        int counts[CookElem_MAX];
} CookElemCount;

// Function that calculates the score of reactivity of a multiset of atoms
int CookElem_score_rx(CookElemCount* counter);

// finds highest rank elem in the multiset.
// if empty returns -1
int CookElem_max(CookElemCount* counter);

#endif
