class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) 
        {
            return 0;
        }
        
        // start from index 1 cuz elements are ordered and will be compared with nums[0]
        int index = 1;
        for (int i = 1; i < nums.size(); i++) 
        {
            // if curr elem does not equal the previous
            if (nums[i] != nums[i - 1]) 
            {
                // save it in [index] then increment index
                nums[index++] = nums[i];
            }
        }

        // resize vector after pushing duplicates into the back
        nums.resize(index);
        
        return index;
    }
};

