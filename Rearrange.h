#ifndef Rearrange_H
#define Rearrange_H

#include "Mutator.h"

class Rearrange : public Mutator
{
public:
	Individual mutate(Individual ind, int k) override;
};

#endif
