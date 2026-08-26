class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0;
        int count1 = 0;
        string result = "";
        for(int r = 0 ; r < s.length() ; r++){
            if(s[r] == '1'){
                count1++;
            }
            while(count1 == k){
                string current = s.substr(l , r - l + 1);

                if(result.length() == 0 || current.length() < result.length() || current.length() == result.length() && current < result){
                    result = current;
                }
                if(s[l] == '1'){
                    count1--;
                }
                l++;
            }
        } 
        return result;
    }
};