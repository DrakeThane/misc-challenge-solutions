##
# @file 002.py
# @brief Finds sum of even Fibonacci numbers
# @author Deeno Burgan
# @version 1
# @date 2016-06-28

def sumEvenFibonacci(aLimit):
    lLast = 1
    lCurrent = 1
    lSum = 0

    while lCurrent <= aLimit:
        lTemp = lLast
        lLast = lCurrent
        lCurrent += lTemp
 
        if( (lCurrent % 2) == 0 ):
           lSum += lCurrent 

    return lSum 

if __name__ == "__main__":
    print("Sum of even Fibonacci numbers less than or equal to 4000000: ", sumEvenFibonacci(4000000))
