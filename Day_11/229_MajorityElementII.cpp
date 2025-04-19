class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // using Boyer-Moore's algorithm for finding the majority elements
        // there can be at most 2 majority elements aka more than n / 3
        int n = nums.size();
        if (n < 1)
        {
            return {};
        } 

        int candidate1 = 0;
        int candidate2 = 0;
        int vote1 = 0;
        int vote2 = 0;

        for (const auto & num : nums)
        {
            // big if-else-if statement to ensure only one action is taken per iteration
            if (candidate1 == num)
            {
                vote1++;
            }
            else if (candidate2 == num)
            {
                vote2++;
            }
            else if (vote1 == 0)
            {
                candidate1 = num;
                vote1 = 1;
            }
            else if (vote2 == 0)
            {
                candidate2 = num;
                vote2 = 1;
            }
            else 
            {
                vote1--;
                vote2--;
            }
        }

        vote1 = 0;
        vote2 = 0;
        vector<int> res;

        for (const auto & num : nums)
        {
            if (candidate1 == num)
            {
                vote1++;
            }
            else if (candidate2 == num)
            {
                vote2++;
            }
        }

        if (vote1 > (n/3))
        {
            res.push_back(candidate1);
        }

        if (vote2 > (n/3))
        {
            res.push_back(candidate2);
        }

        return res;
    }
};
