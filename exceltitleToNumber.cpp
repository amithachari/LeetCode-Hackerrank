class Solution {
public:
    int titleToNumber(string columnTitle) {
	long result = 0;
	for (size_t i = 0; i < columnTitle.size(); i++) {
		result = (result) * 26 + columnTitle[i] - 'A' + 1;
	}
	return result;

}
};
