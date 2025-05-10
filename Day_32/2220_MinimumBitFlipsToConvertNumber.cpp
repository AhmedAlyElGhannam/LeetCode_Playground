class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        start = start ^ goal;
        while (start)
        {
            count += (0x1 & start);
            start = start >> 1;
        }

        return count;
    }
};
