class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool check1, check2, check3;
        check1 = false;
        check2 = false;
        check3 = false;
        int index = 0;
        if (arr.size() >= 3) check1 = true;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] < arr[i+1]) {
                check2 = true;
            }
            else {
                index = i;
                break;
            }
        }

        for (int i = index; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i+1]) {
                check3 = true;
            } else {
                check3 = false;
                break;
            }
        }

        if (check1 && check2 && check3) return true;
        return false;
    }
};
