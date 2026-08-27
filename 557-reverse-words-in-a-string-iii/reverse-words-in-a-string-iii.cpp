class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for(int end = 0 ; end <= s.length() ; end++){
            if(end == s.length() || s[end] == ' '){
                int l = start;
                int r = end - 1;
                while(l < r){
                    swap(s[l] , s[r]);
                    l++;
                    r--;
                }
            start = end+1;
            }
        }
        return s;
    }
};