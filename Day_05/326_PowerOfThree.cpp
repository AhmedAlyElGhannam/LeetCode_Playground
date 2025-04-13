class Solution {
public:
    bool isPowerOfThree(int n) {
        // base case
        if (n <= 0)
            return false;
        else if (n == 1)
            return true;

        return ((n % 3 == 0) && isPowerOfThree(n/3));
    }

    // bool isPowerOfThree(int n) 
    // {
    //     // so, why does this solution work?
    //     // simply, 1162261467 is the largest int power of 3 
    //     // and it is divisible by any power of 3
    //     return ((n > 0) && (1162261467 % n == 0));
    // }
};
