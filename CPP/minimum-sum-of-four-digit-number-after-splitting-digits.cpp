class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr{};
        for(size_t i = 0; i < 4; i++){
            arr.push_back(num%10);
            num/=10;
        }
        sort(arr.begin(), arr.end());
        return((arr[0]+ arr[1])*10 + arr[2] + arr[3]);
    }
};
