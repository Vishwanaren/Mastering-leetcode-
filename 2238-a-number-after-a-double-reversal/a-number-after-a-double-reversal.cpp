class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev = 0;
        int rev2 = 0;
        int dup1 = num;
        while(num>0){
            int lastdig = num%10;
            rev = rev*10+lastdig;
            num /= 10;
        }
        while(rev>0){
            int lastdig = rev%10;
            rev2 = rev2*10+lastdig;
            rev /= 10;
        }
        return rev2 == dup1;
    }
};