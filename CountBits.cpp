class Solution {
public:
    vector<int> countBits(int n) {
        // given:
        // given a non negative integer n

        // goal:
        // iterate through the range of 0 to n
        // for each index number find the number of 1s in its binary form

        // return:
        // return array ans of size n+1 containing the number of 1s at each indexes binary form

        // logic:
        // dynamic programming
        // number of bits of an index = index/2 + index % 2
            // example:
            // index = 1        = 001       == index[1/2] + 1%2 = index[0] + 1      = 0 + 1 = 1
            // index = 2        = 010       == index[2/2] + 2%2 = index[1] + 0      = 1 + 0 = 1
            // index = 3        = 011       == index[3/2] + 3%2 = index[1] + 1      = 1 + 1 = 2
            // index = 4        = 100       == index[4/2] + 4%2 = index[2] + 0      = 1 + 0 = 1
            // index = 5        = 101       == index[5/2] + 5%2 = index[2] + 1      = 1 + 1 = 2

        // create the array ans that will store the results of number of bits at each index
        vector<int> ans(n + 1);

        // index 0 will have 0 1s
        ans[0] = 0;

        // caculate number of 1s for each indexs bit form
        for (int i = 1; i <= n; i++)
        {
            ans[i] = ans[i / 2] + i % 2;
        }

        return ans;
    }
};