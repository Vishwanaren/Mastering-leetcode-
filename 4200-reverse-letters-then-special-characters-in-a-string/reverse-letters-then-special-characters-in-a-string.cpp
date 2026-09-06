class Solution {
public:
    string reverseByType(string s) {
        int n = s.length();
        int l = 0;
        int r = n-1;
        while(l < r){
            if(!(s[l] >= 'a' && s[l] <= 'z')){
                l++;
            }
            else if(!(s[r] >= 'a' && s[r] <= 'z')){
                r--;
            }
            else{
                swap(s[l] , s[r]);
                l++;
                r--;
            }
        }
        l = 0;
        r = n-1;
        while(l < r){
            if(s[l] >= 'a' && s[l] <= 'z'){
                l++;
            }
            else if(s[r] >= 'a' && s[r] <= 'z'){
                r--;
            }
            else{
                swap(s[l] , s[r]);
                l++;
                r--;
            }    
        }
        return s;
    }
};