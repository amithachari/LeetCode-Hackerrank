class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t_sum = 0;
        size_t n = nums.size();
        for(size_t i = 0; i < n; i++){
            t_sum+=nums[i];
        }
        int curr_sum = 0;
        for(size_t i = 0; i < n ; i++){
            if(t_sum - curr_sum - nums[i] == curr_sum){
                return i;
            }
            curr_sum+= nums[i];
        }
        return -1;
    }
};
