class Solution {
public:
    int mySqrt(long int n) {
        // for values of n less than 2 => their sqrt is themselves
        if (n < 2)
        {
            return n;
        }

        // no need to define them as double since the answer should be approximated anyway BUT it has to be double due stupidly large input
        long int lowerBound = 1;
        long int upperBound = n;
        long int middleGround;

        while (lowerBound <= upperBound)
        {
            middleGround = (lowerBound + upperBound) / 2;
            // instead of checking if mid equals n, check if mid*mid equals to n
            // had to change the condition to this (basically the same thing) because of stupidly large inputs
            if ((n / middleGround) == middleGround)
            {
                return middleGround;
            }
            else if ((n / middleGround) > middleGround)
            {
                lowerBound = middleGround + 1;
            }
            else if ((n / middleGround) < middleGround)
            {
                upperBound = middleGround - 1;
            }
            else {}
        }

        // return upperBound since search process eventually converges towards this value
        return upperBound;
    }
};
