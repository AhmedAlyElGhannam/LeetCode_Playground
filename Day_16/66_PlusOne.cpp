class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 0)
        {
            return {1};
        }

        int carry = 1;
        for (int iter = digits.size() - 1; iter >= 0; iter--)
        {
            digits[iter] += carry;
            if (digits[iter] > 9)
            {
                digits[iter] = 0;
                carry = 1;
            }   
            else 
            {
                carry = 0;
                break;
            }
        }

        if (carry != 0)
        {
            vector<int> res;
            res.assign(digits.size() + 1, carry);
            for (int i = 1, j = 0; i < res.size(); i++, j++)
            {
                res[i] = digits[j];
            }

            return res;
        }
        else 
        {
            return digits;
        }
    }
};
