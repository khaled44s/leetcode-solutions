class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_number_of_digits = 0;
        for (int num: nums) {
            int cnt = 0;
            while(num != 0) {
                cnt++;
                num /= 10;
            }
            if (cnt % 2 == 0) {
                even_number_of_digits++;
            }
        }

        return even_number_of_digits;
    }
};
