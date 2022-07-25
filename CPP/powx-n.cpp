class Solution {
public:
    double myPow(double x, int n) {
        int i = 0;
        long long N = n;
        if(N < 0){
            x = 1/x;
            N = -N;
        }
        double ans = 1;
        while(i<n){
            ans*=x;
            i++;
        }
        return ans;
    }
};
