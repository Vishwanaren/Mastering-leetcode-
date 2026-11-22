class Solution {
public:
    bool checkString(string s) {
        int bcount=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                bcount++;
            }
            else if(s[i]=='a' && bcount>0){
                return false;
            }
        }
        return true;
    }
};