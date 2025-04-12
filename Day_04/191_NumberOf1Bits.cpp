class Solution {
public:
    int hammingWeight(int n) 
    {
        // base case 
        if (n == 0)
            return 0;
	
	// recursive statement: summing all ones 
        int weight = (n & 0x01) + hammingWeight(n >> 1);

	// return the weight
        return weight;    
    }
};
