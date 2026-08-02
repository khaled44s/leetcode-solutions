class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        istringstream ss(text);
        string word1, word2, word;
        ss >> word1 >> word2;
        while ( ss >> word ) {
            if (word1 == first && word2 == second) {
                ans.push_back(word);
            }
            word1 = word2;
            word2 = word;
        }

        return ans;
    }
};
