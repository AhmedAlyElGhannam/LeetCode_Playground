class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /* if either vectors is empty => return an empty vector */
        if ((nums1.size() == 0) || (nums2.size() == 0))
        {
            return {};
        }
        
        /* create an unordered set for num1 */
        unordered_set<int> hash_set1(nums1.begin(), nums1.end());

        /* create an unordered set for num2 */
        unordered_set<int> hash_set2(nums2.begin(), nums2.end());

        /* create a vector to hold the results */
        vector<int> res;

        /* loop over set1 elements and find the commonalites with set2 */
        for (const auto & num : hash_set1)
        {
            /* if num exists in set2 and IS NOT THE LAST ELEMENT */
            if (hash_set2.find(num) != hash_set2.end())
            {
                res.push_back(num);
            }
        }

        return res;
    }
};
