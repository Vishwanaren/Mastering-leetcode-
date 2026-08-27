class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;
        for(char c : s){
            if(c == 'L'){
                balance += 1;
            }
            else{balance -= 1;}
            if(balance == 0){
                count += 1;
            }
        }
        return count;
    }
};