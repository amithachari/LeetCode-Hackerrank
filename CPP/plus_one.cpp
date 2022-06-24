class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    size_t n = digits.size();
    size_t flag = 1;
    size_t carry = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] != 9) {
            digits[i] += (flag + carry);
            break;
        }
        else {
            if (i == 0) {
                digits[i] = 0;
                carry = 1;
                flag = 0;
                digits.insert(digits.begin(), carry);
            }
            else {
                digits[i] = 0;
                carry = 1;
                flag = 0;
            }
        }
    }
    return digits;
}
};
