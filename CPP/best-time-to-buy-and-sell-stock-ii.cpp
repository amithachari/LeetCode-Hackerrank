class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        for(size_t i = 0; i < prices.size() -1 ; i++){
            if(prices[i]<prices[i+1]){
                profit+=(prices[i+1] - prices[i]);
            }
        }
        return profit;
    }
};
