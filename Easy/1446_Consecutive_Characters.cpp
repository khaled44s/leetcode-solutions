class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int cnt = 1, mxLength = 0;
        for (int i = 0; i < n - 1; i++) {
            mxLength = max(mxLength, cnt);
            if (s[i] == s[i+1]) {
                cnt++;
            } else {
                cnt = 1;
            }
        } 
        mxLength = max(mxLength, cnt);

        return mxLength;
    }
};
