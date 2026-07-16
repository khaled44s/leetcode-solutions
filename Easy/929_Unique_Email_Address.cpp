class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>s;
        for(auto &email: emails) {
            string cleanEmail;
            for(auto c: email) {
                if (c == '+' || c == '@') break;
                if (c == '.') continue;
                cleanEmail+=c;
            }
            cleanEmail += email.substr(email.find('@'));
            s.insert(cleanEmail);
        }

        int ans = s.size();
        return ans;
    }
};
