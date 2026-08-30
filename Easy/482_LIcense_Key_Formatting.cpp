class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string t;

        for (char c : s) {
            if (c != '-') {
                t += toupper(c);
            }
        }

        int n = t.size();
        int first = n % k;

        string ans;
        int i = 0;

        if (first > 0) {
            ans += t.substr(0, first);
            i = first;
        }
        while (i < n) {
            if (!ans.empty())
                ans += '-';

            ans += t.substr(i, k);
            i += k;
        }

        return ans;
    }
};
