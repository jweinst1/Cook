#ifndef COOK_COMPOUND_HEAD
#define COOK_COMPOUND_HEAD
// Cook compound, primary value in Cook language

// Cook elements act as individual atoms of Cook compounds,
// Elements are analogous to types.

#define Cook_BASE CookElement elem; \
        struct CookCompound* right; \
        struct CookCompound* left; \
        struct CookCompound* inner;

typedef enum
{
        CookElement_None
} CookElement;


struct CookCompound
{

};

typedef struct CookCompound CookCompound;

#endif
