class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int n = candies.size();
        int max = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(max < candies[i]) max = candies[i];
        }
        for(int i = 0 ; i < n ; i++){
            if(candies[i] + extraCandies >= max) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};
