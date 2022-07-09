class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result{first};
        for(size_t i = 0; i < encoded.size();i++){
            result.push_back(result[i]^encoded[i]);
        }
        return result;
    }
};
