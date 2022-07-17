class Solution {
public:
    void reverseString(string &s, int low, int high) {
        int n = s.size();
        for (int i = 0; i < n; i++){
            if (low < high){
                char tmpc = s[low];
                s[low++] = s[high];
                s[high--] = tmpc;
            }
        }
        
    }
    string reverseWords(string s) {
        int start = 0;
        int i = 0;
        for(i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                reverseString(s, start, i-1);
                start = i+1;
            }
            
        }
        reverseString(s, start, i-1);
        return s;
    }
    
};
