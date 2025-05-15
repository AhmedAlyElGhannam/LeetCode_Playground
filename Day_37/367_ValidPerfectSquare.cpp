class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)
            return true;
        else if (num < 4)
            return false;
        
        long int lowerBound = 1;
        long int upperBound = num;
        long int middleGround;
        long long int square = 1;

        while (lowerBound <= upperBound)
        {
            middleGround = (lowerBound + upperBound) / 2;
            square = middleGround * middleGround;

            if (square == num)
            {
                return true;
            }
            else if (square > num)
            {
                upperBound = middleGround - 1;
            }
            else if (square < num)
            {
                lowerBound = middleGround + 1;
            }
        }

        return false;
    }
};
