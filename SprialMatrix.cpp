class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // given:
        // given an m x n integer matrix
        // CONSTRAINTS:
            // m = matrix.size() == ROWS
            // n == matrix[i].size() == COLUMNS
            // 1 <= ROWS, COLUMNS <= 10
            // -100 <= matrix[i][j] <= 100

        // goal:
        // iterate through the matrix in a sprial (clockwise) direction
        // allocate visisted elements into a vector

        // return:
        // return a vector

        // logic:
        // set a left and right bound
        // set a top and bottom bound
        // update bounds as you traverse the matrix in a spiral fasion

        vector<int> answer;

        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;

        while (left <= right && top <= bottom) {

            // get every element in the top row
            for (int i = left; i <= right; i++) {
                answer.push_back(matrix[top][i]);
            }

            // update top bound
            top += 1;

            // get every item in the right most column
            for (int i = top; i <= bottom; i++) {
                answer.push_back(matrix[i][right]);
            }

            // update right bound
            right -= 1;

            if (!(left <= right && top <= bottom)) break;


            // get every element in the bottom row
            for (int i = right; i >= left; i--) {
                answer.push_back(matrix[bottom][i]);
            }

            // update bottom bound
            bottom -= 1;

            // get every element in the left column
            for (int i = bottom; i >= top; i--) {
                answer.push_back(matrix[i][left]);
            }

            // update left bound;
            left += 1;
        }

        return answer;
    }
};