class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        if (pref.size() < 2)
        {
            return pref;
        }    

        // defining the original vector
        vector<int> og;

        // store the first element
        og.push_back(pref[0]);

        // populate og with the right values
        for (int iter = 1; iter < pref.size(); iter++)
        {
            og.push_back(pref[iter] ^ pref[iter - 1]);
        }

        // return og
        return og;
    }
};
