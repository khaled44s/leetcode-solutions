#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 346. Moving Average from Data Stream
Difficulty: Easy
Date: 2026-06-07
TC: O(number of function calls)
SC: O(size)
*/
class MovingAverage {
private:
	int sum;
	int size;
	queue<int> q;
public:
	MovingAverage(int size) {
		this->size = size;
		this->sum = 0;
	}

	double next(int val) {
		if (q.size() >= this->size) {
			sum -= q.front();
			q.pop();
		}
		sum += val;
		q.push(val);

		return (1.0*sum)/q.size();
	}
};

int main() {
	MovingAverage obj(3);

	cout << obj.next(1) << endl;
	cout << obj.next(10) << endl;
	cout << obj.next(3) << endl;
	cout << obj.next(5) << endl;

	return 0;
}
