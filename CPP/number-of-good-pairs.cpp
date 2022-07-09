class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            for( j=i;j<nums.size();j++){
                if(i<j && nums[i] == nums[j]){
                ans++;
                }
            }
        }
        return ans;
    
    }
};
