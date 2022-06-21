class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t c = 1;
        for(size_t i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[c] = nums[i];
                c++;
            }
            }
        return c;
        }
};
