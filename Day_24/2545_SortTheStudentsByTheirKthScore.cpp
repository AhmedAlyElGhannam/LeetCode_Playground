class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& A, int k) {
        // sort function is overloaded to take an extra argument: a lambda expression to do the sorting based on
        // here, A.begin() && A.end() represent the first && last element in vector A aka first row and last row
        // the lambda expression captures k by reference and takes each two elements to do the sorting
        sort(A.begin(), A.end(), [&](auto const & a, auto const & b) 
        {
            // if element num k in row a is greater, then put it first in the sorted vector
            return a[k] > b[k];
        });

        // simply return A after you are done
        return A;
    }
};
