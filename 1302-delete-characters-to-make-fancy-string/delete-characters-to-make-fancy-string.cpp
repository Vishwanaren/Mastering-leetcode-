class Solution {
public:
    string makeFancyString(string s) {
        int count = 0;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                count++;
                if(count>=2){continue;}
            }
            else{count=0;}
            ans+=s[i];
        }
        return ans;
    }
};