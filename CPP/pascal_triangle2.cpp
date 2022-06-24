class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        
        
        if(rowIndex == 0){
            result.push_back({1});
            return result[0];
        }
        result.push_back({1});
        result.push_back({1,1});
        for(size_t i = 1; i < rowIndex; i++){
            vector<int> temp{1};
            for(size_t j = 0; j<result[i].size() - 1; j++){
                temp.push_back(result[i][j] + result[i][j+1]);    
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        
        
        return result[rowIndex];
    }
};
