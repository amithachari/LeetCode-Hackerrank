class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        int temp = x;
        if(x < 0){return false;}
        while(x){
            rev = rev*10 + (x%10);
            x/=10;
        }
    return (rev == temp);
    }
};
