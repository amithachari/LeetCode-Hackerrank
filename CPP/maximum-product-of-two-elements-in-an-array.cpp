class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        size_t n = nums.size();
        return (nums[n-1] - 1)*(nums[n-2] - 1);
    }
};
