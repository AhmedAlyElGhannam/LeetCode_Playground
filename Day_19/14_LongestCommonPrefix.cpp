class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
        {
            return "";
        }

        sort(strs.begin(), strs.end());

        string prefix = "";
        string first = strs.front();
        string last = strs.back();
        
        for (int iter = 0; iter < min(first.size(), last.size()); iter++)
        {
            if (first[iter] == last[iter])
            {
                prefix += first[iter];
            }
            else
            {
                break;
            }
        }

        return prefix;
    }
};
