class Solution {
public:
    int mySqrt(int x) {
    long int result = 0;
    while ((result * result) <= x) {
        if((result+1)*(result+1)>x){
                return result;
            }
            else result++;
    
    }
        return result;
}
    
};
