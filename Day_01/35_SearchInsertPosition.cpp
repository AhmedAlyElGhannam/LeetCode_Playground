class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = -1;
        int upperBound = nums.size() - 1;
        int lowerBound = 0;
        int middleGround;
        while (lowerBound <= upperBound)
        {
            middleGround = (upperBound + lowerBound) / 2;
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

        if (index == -1)
        {
            index = lowerBound;
        }

        return index;
    }
};
