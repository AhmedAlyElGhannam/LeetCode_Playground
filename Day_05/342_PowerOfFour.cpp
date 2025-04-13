class Solution {
public:
    bool isPowerOfFour(long int n) {
        return (n && !(n & (n-1)) && (n & 0x55555555UL));
    }
};
