class KthLargest {
private:
    multiset<int> ms;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (auto& val: nums) {
            add(val);
        }
    }
    
    int add(int val) {
        ms.insert(val);
        if (ms.size() > this->k) ms.erase(ms.begin());
        return *ms.begin();
    }
};
