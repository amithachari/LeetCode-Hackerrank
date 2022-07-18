class Solution {
public:
    int mySqrt(int x) {
        int l = 2, r = x;
        if(x < 2) return x;
        while(l <= r){
            long mid = l + (r - l)/2;
            long num = mid*mid;
            if(num > x){
                r = mid - 1;
            }
            else if(num < x){
                l = mid + 1;
            }
            else return mid;
        }
        return r;
    }
};
