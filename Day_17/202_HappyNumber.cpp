class Solution {
public:
    bool isHappy(long int n) {
        bool res = false;
 	
 	// 1 is a happy number and 7 eventually converges to 1	
        if ((n == 1) || (n == 7))
        {
            res = true;
            return res;
        }
        else if (n < 10) // all other single digits are not happy numbers
        {
            return res;
        }


	// defining variable to hold digit sum
        long long int sum = 0;
	// defining variable to hold n's value to do operations on and continuously update
        long int temp = n;

	// infinite loop XDD
        while (true)
        {
            // extract temp's digits && square them and add them to sum
            while (temp)
            {
                sum += (temp % 10) * (temp % 10);
                temp /= 10;
            }

	    // update temp with sum value
            temp = sum;
	    // reset sum you dumbodumdum
            sum = 0;

            // check for cycle
            if ((temp == n) || (temp == 4))
            {
                break;
            }
            else if (temp == 1) // check if temp is 1 ==> happy
            {
                res = true;
                break;
            }

        }

        return res;
    }
};
