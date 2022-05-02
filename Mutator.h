#ifndef Mutator_H
#define Mutator_H

#include "Individual.h"

class Mutator
{
public:
	virtual ~Mutator();
public:
	virtual Individual mutate(Individual ind, int k) = 0;
};

#endif
