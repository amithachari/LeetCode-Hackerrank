class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, max = -1000000;
        for(size_t i = 0; i < nums.size();i++){
            sum+=nums[i];
            if(max < sum){
                max = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return max;
        
        
    }
};
