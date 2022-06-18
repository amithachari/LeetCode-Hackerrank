class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){return false;}
        std::string temp1 = std::to_string(x);
        size_t size = temp1.size();
        for(size_t i = 0; i < size; i++){
            if(temp1[i]!=temp1[size - 1 - i]){
                return false;
            }
        }
    return true;
    }
};
