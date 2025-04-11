/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int upperBound = n;
        long int lowerBound = 1;
        long int middleGround;
        long int index = -1;
        int temp;

        while (lowerBound <= upperBound)
        {
            middleGround = (upperBound + lowerBound) / 2;
            temp = guess(middleGround);
            if (temp == 0)
            {
                return middleGround;
            }
            else if (temp < 0)
            {
                upperBound = middleGround - 1;
            }
            else if (temp > 0)
            {
                lowerBound = middleGround + 1;
            }
        }

        return -1;
    }
};
