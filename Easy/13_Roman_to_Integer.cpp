#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 13. Roman to Integer
Difficulty: Easy
Date: 2026-06-04
TC: O(|s|)
SC: O(1) constant if we don't consider input string
*/
class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char, int> mapForRomanToInt;
		mapForRomanToInt['I'] = 1;
		mapForRomanToInt['V'] = 5;
		mapForRomanToInt['X'] = 10;
		mapForRomanToInt['L'] = 50;
		mapForRomanToInt['C'] = 100;
		mapForRomanToInt['D'] = 500;
		mapForRomanToInt['M'] = 1000;

		int res = mapForRomanToInt[ s.back() ];
		for(int i = 0; i < s.size() - 1; i++) {
			if (mapForRomanToInt[s[i]] < mapForRomanToInt[s[i+1]]) {
				res -= mapForRomanToInt[s[i]];
			} else {
				res += mapForRomanToInt[s[i]];
			}
		}

		return res;
	}
};

int main() {
	Solution s;
	string str = "MCMXCIV";
	cout << s.romanToInt(str) << endl;

	return 0;
}