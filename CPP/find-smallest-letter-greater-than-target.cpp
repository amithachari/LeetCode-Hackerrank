class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 1, r = letters.size();
        if(letters[0] > target) return letters[0];
        while(l <= r){
            int mid = l + (r - l)/2;
            if(letters[mid] > target && letters[mid - 1] <= target) return letters[mid];
            if(letters[mid] <= target){ l = mid+1;}
            else r = mid -1;
        }
        return letters[0];
    }
};
