#ifndef Individual_H
#define Individual_H

#include <string>
#include <vector>
using namespace std;

class Individual
{
public:
	Individual(int len);
	Individual(const string& str);
public:
	string getString();
	int getBit(int pos);
	void flipBit(int pos);
	int getMaxOnes();
	int getLength();
protected:
	string binaryString;
};

#endif