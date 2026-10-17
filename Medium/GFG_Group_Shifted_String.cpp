
class Solution {
  public:
    vector<vector<string>> groupShiftedString(vector<string> &arr) {
        unordered_map<string, vector<string>> stringMapping;
        for (auto& currentString: arr) {
            int diff = currentString[0] - 'a';
            string groupString = "";
            for (auto& ch: currentString) {
                int value = ch - diff;
                if (value < 'a') value += 26;
                groupString += (char)value;
            }
            stringMapping[groupString].push_back(currentString);
        }
        
        vector<vector<string>> groupStringList;
        for (auto& keyValuePair: stringMapping) {
            groupStringList.push_back(keyValuePair.second);
        }
        
        return groupStringList;
    }
};
