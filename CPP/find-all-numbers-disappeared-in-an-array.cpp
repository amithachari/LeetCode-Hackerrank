class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vt;
        unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++){
            seen[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(!(seen[i]>0)){
                vt.push_back(i);
            }
        }
        return vt;
    }
};
