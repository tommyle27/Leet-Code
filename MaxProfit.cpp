class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // given:
        // given an array prices
        // prices[i] = price of given stock on ith day

        // goal:
        // maximize your profit by choosing a single day to buy one stock
        // and choosing a different day in the future to sell that stock

        // return:
        // int representing max profit
        // if cannot achieve any profit return 0

        // logic:
        // Kadanes Algorithm

        int buy = INT_MAX;
        int sell = 0;

        for (int i = 0; i < size(prices); i++)
        {
            buy = min(buy, prices[i]); // find smallest buy value in array
            sell = max(sell, prices[i] - buy); // find largest profit value 
        }

        return sell;

    }
};