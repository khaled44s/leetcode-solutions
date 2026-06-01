#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 771. Jewels and Stones
Difficulty: Easy
Date: 2026-06-01
TC: O(|jewels|+|stones|)
SC: O(|jewels|)
*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelSet;
        for(auto ch: jewels) {
            jewelSet.insert(ch);
        }
        int cnt = 0;
        for(auto stone: stones) {
            if (jewelSet.count(stone)) {
                cnt++;
            }
        }

        return cnt;
    }
};


int main() {
    Solution s;
    string jewels = "aA", stones = "aAAbbbb";
    int ans = s.numJewelsInStones(jewels, stones);
    cout << ans << endl;

    return 0;
}