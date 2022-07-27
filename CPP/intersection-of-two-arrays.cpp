class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> res;
        for(auto s:s1){
            if(s2.find(s)!=s2.end()) res.push_back(s);
        }
        return res;
    }
};
