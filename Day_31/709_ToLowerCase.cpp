class Solution {
public:
    string toLowerCase(string s) {
        // add 32 to make it lowercase
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                s[i] += 32;
            }
        }

        return s;
    }
};
