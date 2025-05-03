#pragma GCC optimize("O3")
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int mymaxsum = 0;
        int size = piles.size();

        sort(piles.begin(), piles.end());

        for (int i = size/3; i < size; i+= 2) 
        {
            mymaxsum += piles[i];
        }
        
        return mymaxsum;
    }
};
