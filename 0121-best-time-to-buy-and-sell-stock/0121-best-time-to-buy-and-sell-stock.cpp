class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int min_price = prices[0];   // best_buy[0]
        int maxprofit = 0;

        for(int i = 1; i < n; i++){
            // profit calculate
            int currentprofit = prices[i] - min_price;
            maxprofit = max(maxprofit, currentprofit);

            // update minimum price
            min_price = min(min_price, prices[i]);
        }

        return maxprofit;
    }
};