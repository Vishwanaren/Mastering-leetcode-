class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string next_s="";
            for(int i=0;i<s.length()-1;i++){
                int digit = s[i]-'0';
                int nextdigit = s[i+1]-'0';
                next_s+=to_string((digit+nextdigit)%10);
            }
            s=next_s;
        }
        return s[0]==s[1];
    }
};