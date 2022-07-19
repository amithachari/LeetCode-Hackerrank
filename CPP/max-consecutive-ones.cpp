class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int result = 0;
        for(size_t i = 0; i < nums.size() ; i++){
            if(nums[i]==1)   temp++;
            else             temp = 0;
            result = max(result, temp);
            }
        return result;
    }
};
