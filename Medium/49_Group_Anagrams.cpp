//TC: O(n*klog(k))
//SC: O(n*k)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (auto& str: strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str);
        } 

        vector<vector<string>>ans;
        for (auto& group: groups) {
            ans.push_back(group.second);
        }

        return ans;
    }
};