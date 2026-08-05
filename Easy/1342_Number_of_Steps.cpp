class Solution {
private:
    int countSteps(int num, int& steps) {
        if (num == 0) {
            return steps;
        }
        steps += 1;
        if (num % 2 == 0) {
            countSteps(num/2, steps);
        }
        if (num % 2 == 1) {
            countSteps(num-1, steps);
        }
        return steps;
    }
public:
    int numberOfSteps(int num) {
        int steps = 0;
        return countSteps(num, steps);
    }
};
