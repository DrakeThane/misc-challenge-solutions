/**
* @file 002.cpp
* @brief Finds sum of even Fibonacci numbers
* @author Deeno Burgan
* @version 1
* @date 2016-06-26
*/

#include <iostream>

using namespace std;

/* I wanted to try something different, so I made a static class to do the even-number calculations
 * and store the sum. The methods are called from the Fibonacci looper */
class FibonacciSummer
{
	private:
		static unsigned long int fSum;

	public:
		static void add(const unsigned long int aNum)
		{
			if( (aNum % 2) == 0 )
				fSum += aNum; 
		}

		static unsigned long int get(void)
		{
			return fSum;
		}
};

unsigned long int FibonacciSummer::fSum = 0;

/* This just loops through the Fibonacci numbers until they reach the limit */
void fibonacciLooper(unsigned long int aLimit)
{
	unsigned long int lCurrent = 1;
	unsigned long int lLast = 1;

	while(lCurrent <= aLimit)
	{
		unsigned long int lTemp = lCurrent;
		lCurrent = lLast + lCurrent;
		lLast = lTemp;

		FibonacciSummer::add(lCurrent);
	}
}

int main(int argc, char* argv[])
{
	const unsigned long int lLimit = 4000000;
	fibonacciLooper(lLimit);
	cout << "Sum of even Fibonacci numbers less than or equal to "
		<< lLimit << ": " << FibonacciSummer::get() << endl;
	
	return 0;	
}
