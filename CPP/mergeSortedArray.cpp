class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        for(size_t i = 0; i<m; i++){
            result.push_back(nums1[i]);
        }
        for(size_t i = 0; i<n; i++){
            result.push_back(nums2[i]);
        }
        sort(result.begin(), result.end());
        nums1 = result;
    }
};
