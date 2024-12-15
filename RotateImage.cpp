class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // given:
        // given a 2D array (matrix)
        // n x n matrix
        // matrix represents an images

        // goal:
        // rotate the image in place by 90 degrees clockwise

        // return:
        // rotated image/matrix

        // logic:
        // transpose then swap

        int row = matrix.size();

        // transponse the matrix (swap diagonals)
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // now swap horizontal elements after transposing
        for (int i = 0; i < row; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};