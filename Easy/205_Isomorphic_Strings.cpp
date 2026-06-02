#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 205. Isomorphic Strings
Difficulty: Easy
Date: 2026-06-02
TC: O(number of characters in s)
SC: O(number of unique charaters in s)
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mappingS, mappingT;
        for(int i = 0; i < s.size(); i++) {
        	mappingS[s[i]] = t[i];
        	mappingT[t[i]] = s[i];
        }
        for(int i = 0; i < s.size(); i++) {
        	if (s[i] != mappingT[t[i]] || t[i] != mappingS[s[i]]) {
        		return false;
        	}
        }

        return true;
    }
};

int main() {
	Solution ss;
	string s = "egg", t = "add";
	cout << ss.isIsomorphic(s, t) << endl;

	return 0;
}