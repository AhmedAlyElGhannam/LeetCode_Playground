class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // creating a new vector 
        vector<int> nums;
        // merge two vectors into one
        nums.reserve( nums1.size() + nums2.size() ); 
        nums.insert( nums.end(), nums1.begin(), nums1.end() );
        nums.insert( nums.end(), nums2.begin(), nums2.end() );
        // sort new vector
        std::sort(nums.begin(), nums.end());

        // is size is odd, middle element is the median
        if ((nums.size() % 2) != 0)
        {
            return nums[(nums.size() / 2)];
        }
        else // even
        {
            return ((nums[(nums.size() / 2) - 1] + nums[(nums.size() / 2)]) / 2.0);
        }
    }
};
