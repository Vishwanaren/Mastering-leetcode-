class Solution {
public:
    bool checkRecord(string s) {
        int acnt = 0;
        int lcnt = 0;
        for(char ch : s){
            if(ch == 'A'){
                acnt += 1;
                lcnt = 0;
            }
            else if(ch == 'P'){
                lcnt = 0;
            }
            else if(ch == 'L'){
                lcnt += 1;
            }
            if(acnt >= 2 || lcnt >= 3){
            return false;
            }
        }
        return true;
    }
};