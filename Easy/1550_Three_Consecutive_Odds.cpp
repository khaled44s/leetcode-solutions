class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int oddCnt = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 1) {
                oddCnt++;
                if (oddCnt == 3) {
                    return true;
                }
            } else {
                oddCnt = 0;
            }
        }

        return false;
    }
};
