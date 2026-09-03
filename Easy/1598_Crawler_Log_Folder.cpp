class Solution {
public:
    int minOperations(vector<string>& logs) {
        int folder_depth = 0;
        for(auto str: logs) {
            if (str == "../") folder_depth = max(folder_depth - 1, 0);
            else if (str != "./") ++folder_depth;
        }

        return folder_depth;
    }
};
