class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        /*
            how?
            (n > 0) --> for a number to be a power of two, it must be bigger than 0
            !(n & (n-1)) --> all powers of 2 have only one bit set. So, subtracting one from it and
                            and-ing will always give a 0. So, !-ing it will give true.
        */
        return ((n > 0) && (!(n & (n - 1))));
    }
};
