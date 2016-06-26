##
# @file 001.py
# @brief Calculates the sum of multiples (3, 5) below 1000 
# @author Deeno Burgan
# @version 1
# @date 2016-06-21

# Sum multiples of aMultiplier, only summing multiples less than aLimit
def sumMultiples(aMultiplier, aLimit):
    lSum = 0

    if( (aLimit % aMultiplier) == 0 ):
        # If it evenly divides, the the range is simply [1, oneMultipleBeforeLimit)
        lRange = range(1, int(aLimit / aMultiplier))
    else:
        # However, if it doesn't, then the range is [1, oneMultipleBeforeLimitPlusOne) 
        lRange = range(1, int( (aLimit + aMultiplier) / aMultiplier ))
 
    for lNumber in lRange:    
        lSum += (lNumber * aMultiplier) 

    return lSum

if __name__ == "__main__":
     lSum =  sumMultiples(5, 1000) + sumMultiples(3, 1000) - sumMultiples(15, 1000)
     print("Sum of multiples of 3 and 5 below 1000: ", lSum)  
