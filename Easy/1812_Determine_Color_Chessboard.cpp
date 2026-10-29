class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum = 0;
        if(coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g') sum++;
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7') sum++;
        return sum%2==1; 
    }
};
