class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        size_t res = 0;
        size_t n = nums.size();
        if(target <= nums[0]){
            return 0;
        }
        int i = 0;
        for(i=1;i<nums.size();i++){
            if(target==nums[i-1]){
                return i-1;
            }
            if(target>nums[i-1]&&target<nums[i]){
                return i;
            }
            
        }
        if(target==nums[n-1]){
            return n-1;
        }
       return i;
    }
};
