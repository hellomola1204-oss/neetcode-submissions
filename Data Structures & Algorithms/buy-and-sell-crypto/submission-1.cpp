class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int n = prices.size();
        int min_value_before = prices[0];
        int profit = 0;
        int max_profit = 0;

        for(int i = 1;i<n;i++){
            min_value_before=min(min_value_before,prices[i]);
            profit = prices[i]-min_value_before;
            max_profit=max(max_profit,profit);
        }
        return max_profit;


        
    }
};
