#include "Rearrange.h"

Individual Rearrange::mutate(Individual ind, int k)
{
	--k;
	k = k % ind.getLength();
	string r = ind.getString().substr(k);
	string l = ind.getString().substr(0, k);
	return Individual(r + l);
}
