#include "BitFlip.h"

Individual BitFlip::mutate(Individual ind, int k)
{
    --k;
    ind.flipBit(k % ind.getLength());
    return ind;
}
