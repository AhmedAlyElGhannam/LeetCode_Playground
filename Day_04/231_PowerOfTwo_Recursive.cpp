class Solution {
public:
    bool isPowerOfTwo(int n, int onesCounter = 0) 
    {
        // base case #1
        if (onesCounter > 1)
            return false;

        // base case #2 (handling n = 0)
        if ((n == 0) && (onesCounter == 0))
            return false;

        // base case #3 (n fulfills the requirements for a power of 2)
        if ((n == 0) && (onesCounter == 1))
            return true;

        // recursive statement
        return isPowerOfTwo(n >> 1, onesCounter = (n & 0x01) ? onesCounter+1 : onesCounter);
    }
};
