class Solution {
public:
    int majorityElement(vector<int>& nums) {
    size_t c = 1;
    int element = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        if (nums[i] == element) {
            c++;
        }
        else {
            c--;    
        }
        if (c == 0) {
            element = nums[i];
            c = 1;
        }
    }
    return element;
}
};
