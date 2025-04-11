class Solution {
public:
    int search(vector<int>& nums, int target) {
        int upperBound = nums.size() - 1;
        int lowerBound = 0;
        int middleGround;
        int index = -1;

        while (lowerBound <= upperBound)
        {
            middleGround = (lowerBound + upperBound) / 2;
            if (nums[middleGround] == target)
            {
                index = middleGround;
                break;
            }
            else if (nums[middleGround] > target)
            {
                upperBound = middleGround - 1;
            }
            else if (nums[middleGround] < target)
            {
                lowerBound = middleGround + 1;
            } 
        }

        return index;
    }
};
