class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> vec;
        size_t n = nums.size();
        for(size_t i = 0; i<n; i++){
            if(nums[i]%2 == 0){
                vec.push_back(nums[i]);
            }
        }
        for(size_t i = 0; i<n; i++){
            if(nums[i]%2 != 0){
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};
