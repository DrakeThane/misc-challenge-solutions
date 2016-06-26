/**
* @file 001.cpp
* @brief Calculates sum of multiples (3, 5) below 1000
* @author Deeno Burgan
* @version 1
* @date 2016-06-26
*/

#include <iostream>

using namespace std;

unsigned long int sumMultiples(unsigned long int aMultiplier, unsigned long int aLimit)
{
	unsigned long int lSum = 0.0;
	unsigned long int lUpperLim = 0.0;

	if( (aLimit % aMultiplier) == 0 )
		lUpperLim = aLimit / aMultiplier;
	else
		lUpperLim = (aLimit + aMultiplier) / aMultiplier;

	for(int lNumber = 0; lNumber < lUpperLim; lNumber++)
		lSum += lNumber * aMultiplier;

	return lSum;
}

int main(int argc, char* argv[])
{
	unsigned long int lSum = sumMultiples(5, 1000) + sumMultiples(3, 1000) - sumMultiples(15, 1000);
	cout << "Sum of multiples of 3 and 5 below 1000: " << lSum << endl;

	return 0;
}
