#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(double p)
    : p(p)
{
}

Individual BitFlipProb::mutate(Individual ind, int k)
{
    for (int a = 0; a < ind.getLength(); a++)
    {
        double _p = 0.0;
        int count = 0;
        int pp = (int)(10 * p);

        for (int i = 0; i < 10; i++)
        {
            int j = (rand() % (10 - 0 + 1)) + 0;
            if (j <= pp) ++count;
        }

        _p = (double)count / 10.0;

        if (_p > p)
        {
            ind.flipBit(a);
        }
    }

    return ind;
}
