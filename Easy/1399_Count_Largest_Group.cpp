class Solution {
public:
    int digsum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        vector<int> sums(37);
        for (int i = 1; i <= n; i++) sums[digsum(i)]++;
        int max = 0, cnt = 0;
        for (int i : sums) 
            if (i > max) max = i, cnt = 1;
            else if (i == max) ++cnt;
        
        return cnt;
    }
};
