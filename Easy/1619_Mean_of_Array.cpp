class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int length = arr.size();
        int fivePercent = length * 5 /100;
        int sum = accumulate(arr.begin()+fivePercent,arr.end()-fivePercent,0);
        int remainingSize = length - (2 * fivePercent);
        double mean = sum/(double)remainingSize;
        return mean;
    }
};
