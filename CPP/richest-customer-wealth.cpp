class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = INT_MIN;  
        for(size_t i = 0; i<accounts.size();i++){
            int temp = 0;  
            for(size_t j = 0; j<accounts[0].size(); j++){
                  temp+=accounts[i][j];
              }
            if(temp>result){
                result = temp;
            }
          }
        return result;
    }
};
