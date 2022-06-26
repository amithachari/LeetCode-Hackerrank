class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string result;
        for(size_t i = 0; i < s.size(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') ){
                result.push_back(s[i]);
            }
        } 
        for(size_t i = 0; i < result.size(); i++){
            cout << result[i];
        }
        string reverse_ = result;
        reverse(reverse_.begin(), reverse_.end());
        
        return reverse_==result;
    }
    
};
