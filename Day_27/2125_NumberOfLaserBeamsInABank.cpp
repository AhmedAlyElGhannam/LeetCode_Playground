class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum = 0;
        int numOf1sPrev = 0;
        int numOf1sNext = 0;

        for (const auto & iterRow : bank) 
        {
            for (int i = 0; i < iterRow.size(); i++) 
            {
                numOf1sNext += iterRow[i] - '0';
            }


            if (numOf1sNext == 0)
            {
                continue;
            }

            sum += (numOf1sPrev * numOf1sNext);

            numOf1sPrev = numOf1sNext;
            numOf1sNext = 0;
        }

        return sum;
    }
};
