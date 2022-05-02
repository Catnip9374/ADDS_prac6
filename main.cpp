
#include <iostream>
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    Individual ind = mPtr->mutate(*indPtr, k);
    return new Individual(ind.getString());
}

int main()
{
    srand((int)time(0));

    string str1, str2;
    int k1, k2;
    cin >> str1 >> k1 >> str2 >> k2;

    Individual ind1(str1);
    Individual ind2(str2);

    BitFlip bf;
    Rearrange ra;

    Individual* pind1 = execute(&ind1, &bf, k1);
    Individual* pind2 = execute(&ind2, &ra, k2);

    cout << pind1->getString() << " "
        << pind2->getString() << " "
        << pind2->getMaxOnes() << endl;

    delete pind1;
    delete pind2;
}
