class Solution {
public:
    int countDigits(int num) {
        int dup = num;
        long long count = 0;
        while(num > 0){
            int val = num % 10;
            if(dup % val == 0){
                count++;
            }
            num /= 10;
        }
        return count;
    }
};