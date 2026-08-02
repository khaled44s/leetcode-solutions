class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> outList (stones.begin(), stones.end());

        while (outList.size() > 1) {
            int heavy1 = outList.top();
            outList.pop();
            int heavy2 = outList.top();
            outList.pop();

            if (heavy1 != heavy2) {
                int newWeight = heavy1 - heavy2;
                outList.push(newWeight);
            }
        }

        if (outList.size() == 1) return outList.top();
        else return 0;
    }
};

