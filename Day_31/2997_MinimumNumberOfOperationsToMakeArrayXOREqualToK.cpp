#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorVal = 0;
        int onesCount = 0;
        for (const auto & num : nums)
        {
            xorVal ^= num;
        }

        if (xorVal != k)
        {
            xorVal ^= k;

            while (xorVal)
            {
                onesCount += (0x1 & xorVal);
                xorVal = xorVal >> 1;
            }
        }

        return onesCount;
    }
};
