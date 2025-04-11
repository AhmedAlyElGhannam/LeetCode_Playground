class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        long int upperBound = letters.size() - 1;
        long int lowerBound = 0;
        long int middleGround;
        
        // edge cases
        if ((target >= letters[upperBound]) || (target < letters[lowerBound]))
        {
            return letters[lowerBound];
        }

        while (lowerBound <= upperBound)
        {
            middleGround = (lowerBound + upperBound) / 2;

            if (letters[middleGround] > target)
            {
                upperBound = middleGround - 1;
            }
            else 
            {
                lowerBound = middleGround + 1;
            }
        }

        return letters[lowerBound];
    }
};
