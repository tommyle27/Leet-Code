class Solution {
public:
    int climbStairs(int n) {
        // given:
        // examples
        // f(2) = 2
        //  1 step + 1 step
        //  2 steps
        // f(3) = 3
        //  1 step + 1 step + 1 step
        //  1 step + 2 steps
        //  2 steps + 1 step

        // goal:
        // climbing a staircase. it takes n steps to reach the top
        // each time you can either take 1 or 2 steps
        // how many distinct ways can you climb to the top?

        // return:
        // return int representing the number of distinct ways to climb to the top

        // logic:
        // dynammic programming
        // fibbonanci sequence
        // f(0) = 0
        // f(1) = 1
        // f(2) = 2
        // f(3) = 3
        // f(4) = f(4-1) + f(4-2) = 5

        // thus f(n) = f(n-1) + f(n-2)
        // tabulation approach - elimates recursion and uses bottom-up approach

        if (n == 1 || n == 0) return 1;

        vector<int> DP(n + 1);
        DP[0] = DP[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            DP[i] = DP[i - 1] + DP[i - 2];
        }

        return DP[n];
    }
};