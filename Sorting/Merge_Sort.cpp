#include <bits/stdc++.h>
using namespace std;

/*
TC: O(nlogn)
SC: O(n)
*/

void merge(vector<int>& a, int l, int m, int r) {
    vector<int> temp;
    int i = l, j = m + 1;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }

    while (i <= m) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = l; k <= r; k++) {
        a[k] = temp[k - l];
    }
}

void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;

    int m = l + (r - l) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);

    merge(a, l, m, r);
}

int main() {
    vector<int> a = {6, 2, 8, 9, 3, 1, 5};

    mergeSort(a, 0, a.size() - 1);

    for (int x : a) cout << x << " ";
    cout << "\n";

    return 0;
}
