class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return intersect(nums2, nums1);
        }
        
        unordered_map<int, int> map;
        for(auto num : nums1) ++map[num];
        int i=0;
        for(auto num:nums2){
            auto it = map.find(num);
            if(it!=end(map) && --it->second >=0) nums1[i++] = num;
        }
        return vector(nums1.begin(), nums1.begin() + i);
    }
};
