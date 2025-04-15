class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;

        for (const auto & num : nums)
        {
            if (hashSet.contains(num))
                return true;
            
            hashSet.insert(num);
        }

        return false;
    }
};
