class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        // variables to hold min distance, temp min distance in this iteration, and index of min distance point
        int min = 99999999;
        int temp = 0;
        int min_index = -1;

        // loop over all points
        for (int i = 0; i < points.size(); i++)
        {
            // required: if x or y in this point are the same as this point
            if (points[i][0] == x || points[i][1] == y)
            {
                // calculate the distance
                temp = abs(x - points[i][0]) + abs(y - points[i][1]);
                // if the calculate distance is less than min
                if (temp < min)
                {
                    // make this dist the new min
                    min = temp;
                    // make the index of this point the new min_index
                    min_index = i;
                }
                else {}
            }
            else {}
        }

        // return the min_index: either will be within the array or -1
        return min_index;
    }
};
