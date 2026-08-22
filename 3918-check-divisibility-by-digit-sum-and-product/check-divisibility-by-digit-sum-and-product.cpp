class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum = 0;
        int digitproduct = 1;
        int m = n;

        while(n>0){
            int digit = n % 10;
            digitsum += digit;
            digitproduct *= digit;
            n /= 10;
        }
        int sum = digitsum + digitproduct;
        return m % sum == 0;
    }
};