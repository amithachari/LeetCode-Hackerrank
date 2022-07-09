class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(size_t i = 0; i<n;i++){
            int temp = 0;
            for(size_t j = 0; j < n; j++){
                if(nums[i]>nums[j]){
                    temp++;
                }
                
            }
            result.push_back(temp);
        }
        return result;
    }
};
