class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for(size_t i = 0; i<nums.size();i++){
            if(nums[i] != 0){
                nums[c] = nums[i];
                c++;
            }
        }
        for(size_t i = c; i<nums.size();i++){
            nums[i] = 0;
        }
    }
};
