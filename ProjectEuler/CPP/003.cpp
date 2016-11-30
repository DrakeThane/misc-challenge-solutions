#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<unsigned long> primeFactors(unsigned long aNum)
{
	cout << "Trying to find prime factors of " << aNum << endl;

	vector<unsigned long> lFactors;
	double lHalf = aNum / 2.0; 
	unsigned long lNum = 2;

	for(lNum; lNum <= lHalf; lNum++)
	{
		if( (aNum % lNum) == 0 )
		{
			lFactors.push_back(lNum);		

			unsigned long lOtherFactor = aNum / lNum;

			if(lOtherFactor != aNum)	

			break;
		}
	}

	if(lFactors.size() == 0)
	{
		lFactors.push_back(aNum);
		return lFactors; 
	}

	for(vector<unsigned long>::iterator lIter = lFactors.begin(); lIter != lFactors.end(); lIter++)
	{
		vector<unsigned long> lNewFactors = primeFactors(*lIter);

		if(lNewFactors.size() == 0)
			continue;

		cout << "\tDeleting " << *lIter << endl;
		lFactors.erase(lIter);
	
		cout << "\tReplacing with" << endl;	
		for(vector<unsigned long>::iterator lNewIter = lNewFactors.begin(); lNewIter != lNewFactors.end(); lNewIter++)
		{
			cout << "\t\t" << *lNewIter << endl;	
			lFactors.push_back(*lNewIter);
		}
	}

	cout << "PFs of " << aNum << " = ";
	for(vector<unsigned long>::iterator lIter = lFactors.begin(); lIter != lFactors.end(); lIter++)
			cout << *lIter << ", ";
	cout << endl;

	return lFactors;
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		cout << "Error: need an argument to prime factorise" << endl;
		return 1;
	}

	vector<unsigned long> lFactors = primeFactors( atoi(argv[1]) );

	for(vector<unsigned long>::iterator lIter = lFactors.begin(); lIter != lFactors.end(); lIter++)
		cout << *lIter << endl;

	return 0;
}
