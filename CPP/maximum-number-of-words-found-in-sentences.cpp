class Solution {
public:
    int num_of_words(string sent){
        int i = 1;
        for(auto s : sent){
            if(s == ' '){
                i++;
            }
        }
        return i;
    }
    
    int mostWordsFound(vector<string>& sentences) {
        int result = 0;
        for(auto sent: sentences){
            int temp = 0;
            temp = num_of_words(sent);
            if(temp > result){
                result = temp;
            }
        }
        return result;
    }
};
