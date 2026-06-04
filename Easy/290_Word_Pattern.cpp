#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 290. Word Pattern
Difficulty: Easy
Date: 2026-06-04
TC: O(|patten|)
SC: O(|pattern|+|s|) size of pattern
*/
class Solution {
public:
	bool wordPattern(string pattern, string s) {
		unordered_map<string, int> strToIndexMapping;

		vector<string> wordList;
		string word;
		stringstream ss(s);
		while (ss >> word) {
			wordList.push_back(word);
		}

		if (pattern.size() != wordList.size()) {
			return false;
		}

		for (int i = 0; i < pattern.size(); i++) {
			string patternString = to_string(pattern[i]);
			if (!strToIndexMapping.count(patternString)) {
				strToIndexMapping[patternString] = i;
			}
			if (!strToIndexMapping.count(wordList[i])) {
				strToIndexMapping[wordList[i]] = i;
			}
			if (strToIndexMapping[patternString] != strToIndexMapping[wordList[i]]) {
				return false;
			}
		}

		return true;
	}
};



int main() {
	Solution s;
	string pattern = "abba", ss = "dog cat cat dog";
	cout << s.wordPattern(pattern, ss) << endl;

	return 0;
}




// /*
// Problem: Leetcode 290. Word Pattern
// Difficulty: Easy
// Date: 2026-06-04
// TC: O(|s|+|patten|)
// SC: O(|pattern|) size of pattern
// */
// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
//         unordered_map<char, string> charToStr;
//         unordered_map<string, char> strToChar;
        
//         vector<string> wordList;
//         string word;
//         stringstream ss(s);
//         while (ss >> word) {
//         	wordList.push_back(word);
//         }

//        	if (pattern.size() != wordList.size()) {
//        		return false;
//        	}

//        	for (int i = 0; i < pattern.size(); i++) {
//        		charToStr[pattern[i]] = wordList[i];
//        		strToChar[wordList[i]] = pattern[i];
//        	}

//        	for (int i = 0; i < pattern.size(); i++) {
//        		if (charToStr[pattern[i]] != wordList[i] || strToChar[wordList[i]] != pattern[i]) {
//        			return false;
//        		}
//        	}

//        	return true;
//     }
// };











/*
- To convert space separated string to words
string s = "dog cat cat dog";
stringstream ss(s);
string word;
vector<string>wordList;
while (ss >> word) {
	wordList.push_back(word);
}

for(auto& word: wordList) cout << word << endl;
*/
