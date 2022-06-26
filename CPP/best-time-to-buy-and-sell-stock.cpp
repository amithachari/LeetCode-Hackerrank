class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min_ = INT_MAX;
        
        for(int i = 0; i<prices.size(); i++)
        {
            min_ = min(min_,prices[i]);
            res = max(res, prices[i] - min_);
        }
        
        return res;
    }
};
