class Solution {
public:
    string generateTheString(int n) {
        char ch = 'a';
        string str = "";
        if (n%2==1) {
            while(n--) {
                str += 'a';
            }
            return str;
        }
        int t = n - 1;
        while(t--){
            str += ch;
        }
        str += 'b';
        return str;
    }
};
