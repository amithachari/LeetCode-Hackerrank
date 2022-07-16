class Solution {
public:
    
    
    vector<int> replaceElements(vector<int>& arr) {
        int currMax = -1;
        int temp;
        for(int i = arr.size() -1 ; i >= 0; i--){
            temp = arr[i];
            arr[i] = currMax;
            currMax = max(currMax, temp);
            
        }
        return arr;
    }
};
