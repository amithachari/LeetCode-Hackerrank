class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto num: nums) ++map[num];
        for(auto it: map){
            if(it.second >= 2){
                return it.first;
            }

        }
        return -1;
    }
};
