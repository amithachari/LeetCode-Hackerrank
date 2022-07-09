class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> result;
        for(size_t i = 0; i < nums.size()/2; i++){
            for(size_t j = 0; j < nums[2*i]; j++){
                result.push_back(nums[2*i + 1]);
            }
        }
        return result;
    }
};
