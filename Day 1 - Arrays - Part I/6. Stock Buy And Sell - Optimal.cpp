class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), profit = 0, currPrice = INT_MAX;
        for(int i = 0; i < n; i++){
            currPrice = min(currPrice, prices[i]);
            profit = max(profit, prices[i] - currPrice);
        }
        return profit;
    }
};