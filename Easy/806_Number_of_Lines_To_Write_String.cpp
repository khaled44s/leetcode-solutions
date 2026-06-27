class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int numOfLines = 0, sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (sum + widths[s[i]-'a'] > 100) {
                numOfLines++;
                sum = widths[s[i]-'a'];
            } else {
                sum += widths[s[i]-'a'];
            }
        }

        return {numOfLines+1, sum};
    }
};
