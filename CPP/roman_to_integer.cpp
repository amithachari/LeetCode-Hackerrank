class Solution {
public:
    
    int romanToInt(string s) {
        int sum = 0;
        for(size_t i = 0; i < s.size(); i++){
            if(value(s[i])<value(s[i+1])){
                sum += (value(s[i+1]) - value(s[i]));
                i++;
            }
            else{
                sum += value(s[i]);
            }
            cout << sum << endl;
        }
        return sum;
    }
private:
        int value(char c){
            if(c == 'I'){
                return 1;
            }
            if(c == 'V'){
                return 5;
            }
            if(c == 'X'){
                return 10;
            }
            if(c == 'L'){
                return 50;
            }
            if(c == 'C'){
                return 100;
            }
            if(c == 'D'){
                return 500;
            }
            if(c == 'M'){
                return 1000;
            }
        return 0;
        }
};
