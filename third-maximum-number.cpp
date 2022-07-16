class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c = 1;
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                c++;
            }
            if(c == 3){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};
