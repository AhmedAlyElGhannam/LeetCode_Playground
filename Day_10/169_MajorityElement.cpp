class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {   
        if (nums.size() < 1)
        {
            return 0;
        }

        // defining an unordered map to store elements and the number of occurances
        unordered_map<int, int> hash_map;

        // to store size of arr
        int size = nums.size();

        // count the number of occurances of each element
        for (int i = 0; i < size; i++) 
        {
            // increment the count for this element
            hash_map[nums[i]]++;
        }

        // divide size by 2 to compare with the number of occurances
        size = size / 2;

        // iterate over half the values of nums to see the most repeated element
        for (const auto & x : hash_map)
        {
            // if the element is repeated more than n/2 ==> return it
            if (x.second > size)
            {
                return x.first;
            }
        }

        // otherwise, return 0
        return 0;
    }
};
