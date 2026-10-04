class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(isalpha(s[r])&&isalpha(s[l])){
                swap(s[l],s[r]);
                r--;
                l++;
            }
            else if(isalpha(s[l])){
                r--;
            }
            else{l++;}
        }
        return s;
    }
};