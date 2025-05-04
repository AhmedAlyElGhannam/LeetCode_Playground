#pragma GCC optimize("O3")
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = {0, 0};

        unordered_set<int> set1;
        unordered_set<int> set2;

        // counting elements in nums1
        for (const auto & num : nums1)
        {
            set1.insert(num);
        }

        // counting elements in nums2
        for (const auto & num : nums2)
        {
            set2.insert(num);

            // counting the number of occurances of nums2 elements in nums1
            if (set1.contains(num))
            {
                res[1]++;
            }
        }

        // counting the number of occurances of nums1 elements in nums2
        for (const auto & num : nums1)
        {
            if (set2.contains(num))
            {
                res[0]++;
            }
        }

        // return res vector
        return res;
    }
};
