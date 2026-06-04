#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 1047. Remove All Adajcent Duplicates in String
Difficulty: Easy
Date: 2026-06-04
TC: O(n) where n is the size of string s
SC: O(n) 
*/
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> duplicateChar;
        for (auto& ch: s) {
        	if (!duplicateChar.empty() && duplicateChar.top() == ch) {
        		duplicateChar.pop();
        	} else {
        		duplicateChar.push(ch);
        	}
        }

        string myFinalString = "";
        while(!duplicateChar.empty()) {
        	myFinalString.push_back(duplicateChar.top());
        	duplicateChar.pop();
        }

        reverse(myFinalString.begin(), myFinalString.end());

        return myFinalString;
    }
};

int main() {
	Solution s;
	string ss = "abbaca";
	cout << s.removeDuplicates(ss) << endl;

	return 0;
}