class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(nums[mid] == target){
                int i = mid, j = mid;
                while(i - 1 >= 0  && nums[i -1] == target){
                    i--;
                }
                while(j + 1 < nums.size()  && nums[j +1] == target){
                    j++;
                }
                return {i,j};
            }
            if(nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return {-1, -1};
        
        
    }
};
