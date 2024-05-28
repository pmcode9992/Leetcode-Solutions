class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int l = 0;
        int r = cols - 1;
        int m;
        for (int i = 0; i < rows; i++) {
            l = 0;
            r = cols - 1;
            while (l <= r) {
                m = (r - l) / 2 + l;
                if (matrix[i][m] > target) {
                    // check left
                    r = m - 1;

                } else if (matrix[i][m] < target) {
                    // check right
                    l = m + 1;
                } else {
                    return true;
                }
            }
        }
        return false;
    }
};