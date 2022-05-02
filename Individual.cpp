#include "Individual.h"

Individual::Individual(int len)
	: binaryString(len, '0')
{
}

Individual::Individual(const string& str)
	: binaryString(str)
{
}

string Individual::getString()
{
	return binaryString;
}

int Individual::getBit(int pos)
{
	if (pos < 0 || pos >= (int)binaryString.size())
	{
		return -1;
	}
	return binaryString[pos];
}

void Individual::flipBit(int pos)
{
	char ch = binaryString[pos];
	binaryString[pos] = ch == '0' ? '1' : '0';
}

int Individual::getMaxOnes()
{
	vector<int> res;
	for (size_t i = 0; i < binaryString.size(); i++)
	{
		if (binaryString[i] == '0')
		{
			if (res.size() == 0)
			{
				res.push_back(0);
			}
			else
			{
				if (res.back() != 0)
				{
					res.push_back(0);
				}
			}
		}
		else
		{
			if (res.size() == 0)
			{
				res.push_back(1);
			}
			else
			{
				++res.back();
			}
		}
	}

	int max = 0;
	for (size_t i = 0; i < res.size(); i++)
	{
		if (i == 0)
		{
			max = res[i];
		}
		else
		{
			if (res[i] > max)
			{
				max = res[i];
			}
		}
	}

	return max;
}

int Individual::getLength()
{
	return binaryString.size();
}
