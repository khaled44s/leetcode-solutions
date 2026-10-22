class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> temp;
        for(int i = 0; i < points.size(); i++){
            temp.push_back(points[i][0]);
        }
        sort(temp.begin(),temp.end());
        int max = 0,x;
        for(int i = 0; i < temp.size()-1; i++){
            x = temp[i+1] - temp[i];
            if(x > max) max = x;
        }
        return max;
    }
};
