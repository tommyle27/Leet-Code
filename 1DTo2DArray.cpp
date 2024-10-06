class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // given: 
        // given a 0-indexed 1D array of integers called "original"
        // given and integer 'm' = rows and 'n' = columns
        // Constraints:
            // 1 <= original.size() <= 5*10^4
            // 1 <= original[i] <= 10^4
            // 1 <= m, n <= 4*10^4

        // goal:
        // turn the given 1D array into a 2D array with dimensions m x n 
        // elements from [0, n-1] should form the first row
        // the elements from indices [n, 2 * n-1] should form the second row and so on

        // return:
        // return a 2D Array

        // logic:
        // create a new 2D array
        // create a for loop
        // iterate through 1D array
        // calculate the current row and column the current element should be on given the current iteration
        // since n elements on each row
        // Any number within [0, n-1] / n = row 0
        // Any number within [n, 2 * n-1] / n = row 1
            // example: let n = 4, original.size() = 8
            // 0 / 4 = 0
            // 1 / 4 = 0
            // 2 / 4 = 0
            // 3 / 4 = 0

            // 4 / 4 = 1
            // 5 / 4 = 1
            // 6 / 4 = 1
            // 7 / 4 = 1

        // using this pattern i / n = currentRow

        // using the similar logic i from range of [0, n-1] % n = columns in row 0
            // example: let n = 4, original.size() = 8
            // 0 % 4 = 0
            // 1 % 4 = 1
            // 2 % 4 = 2
            // 3 % 4 = 3

            // 4 % 4 = 0
            // 5 % 4 = 1
            // 6 % 4 = 2
            // 7 % 4 = 3    

        // using this pattern i % n = currentColumn

        // base case:
        if (m * n != original.size()) return {};

        vector<vector<int>> newArray(m, vector<int>(n));
        int currentRow = 0, currentColumn;

        for (int i = 0; i < original.size(); i++) {
            currentRow = i / n;
            currentColumn = i % n;

            newArray[currentRow][currentColumn] = original[i];
            //std::cout << "At Row and Column: " << currentRow << " " << currentColumn<< " Set to: " << original[i] << std::endl;

        }

        return newArray;
    }
};