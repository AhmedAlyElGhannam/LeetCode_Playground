class Solution {
public:
    int passThePillow(int n, int k) {
        k = (k % (2 * (n - 1)));
        return (k < n ? k + 1 : 2 * (n - 1) - k + 1);
    }
};
