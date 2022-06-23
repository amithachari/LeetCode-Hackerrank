class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t result = 0;

        for(int i = s.size() - 1;i >=0; i--){
            if(s[i]!=' ')
            {
                result++;
                if(i>0 and s[i-1]==' ')
                    break;
            }  
        }
        return result;
    }
};
