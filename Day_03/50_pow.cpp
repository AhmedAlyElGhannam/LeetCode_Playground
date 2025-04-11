class Solution {
public:
    double myPow(double x, int n) 
    {
        return n < 0 ? myPowHelper((1 / x), -1 * (long long)n) : myPowHelper(x, (long long)n);
    }

    double myPowHelper(double x, long long n) 
    {
        // base case
        if (n < 1)
        {
            return 1.0;
        }

        double shardVal = myPowHelper(x, n / 2);

        // recursive statement
        /**
            Why does this work?
            let us put it like this:
            7^5 = 7^2 * 7^2 * 7^1
            @main call, I want to calculate 7^5
            @1st recursive call, I want to calculate 7^(5/2) = 7^2
            @2nd recursive call, I want to calculate 7^(2/2) = 7^1 = 7
            @3rd recursive call, I wanto to calculate 7^(1/2) = 7^0 = 1

            resolution:
            3rd recursive call returns 1 (base case)
            2nd recursive call returns 7 * 1 * 1 (since n = 1 aka odd)
            1st recursion call returns  7 * 7 aka 7^2 (since n = 2 aka even)
            main call returns 7^2 * 7^2 * 7 aka the required answer (since n = 5 aka odd)
        */
        return (n % 2 == 0) ? (shardVal * shardVal) : (shardVal * shardVal * x);
    }
};


