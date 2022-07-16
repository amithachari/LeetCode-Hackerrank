class Solution {
public:
    vector<int> bubbleSort(vector<int> heights){
        int n = heights.size();
        for(size_t i = 0; i< n - 1;i++){
            for(size_t j = 0; j < n - i - 1; j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                }
            }
            
        }
        return heights;
    }
    int heightChecker(vector<int>& heights) {
        vector<int> expected = bubbleSort(heights);
        
        int res = 0;
        for(size_t i = 0; i < heights.size(); i++){
            if(expected[i] != heights[i]){
                res++;
            }
        }
        return res;
    }
};
