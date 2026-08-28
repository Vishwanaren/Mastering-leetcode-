class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = 1;
        string s = to_string(n);
        for(char c : s){
            sum += sign * (c - '0');
            sign = -sign;
        }
        return sum;
    }
};