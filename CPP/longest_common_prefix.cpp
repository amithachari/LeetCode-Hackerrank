class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        size_t len = strs.size();
        string value = "";
        
        for(size_t i = 0; i < strs[0].size(); i++){
            char temp = strs[0][i];
            for(size_t j = 1; j < len; j++){
                if(strs[j][i] != temp)
                    return value;
            }
            value += temp;
        }
    return value;
    }
};
