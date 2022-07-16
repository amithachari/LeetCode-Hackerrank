class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int current = arr[0];
        int top = 0; 
        int valley = 0;
        int plain = 0;
        for(int i = 1; i< arr.size() - 1; i++){
            
            if(arr[i] > arr[i-1] && arr[i+1] < arr[i]){
                top++;
            }
            if(arr[i] < arr[i-1] && arr[i+1] > arr[i]){
                valley++;
            }
            if(arr[i] == arr[i-1] || arr[i+1] == arr[i]){
                plain++;
            }
            
        }
        if(top == 1 && valley == 0 && plain == 0){
            return true;
        }
        else{
            return false;
        }
    }
};
