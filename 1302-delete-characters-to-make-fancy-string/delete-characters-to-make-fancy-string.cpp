class Solution {
public:
    string makeFancyString(string s) {
        int count = 0;
        int n = s.length();
        string ans = "";
        ans.reserve(n);
        for(int i=0;i<n;i++){
            if(i>0 && s[i]==s[i-1]){
                count++;
            }
            else{count = 1;}
            if(count<3){ans.push_back(s[i]);}
        }
        return ans;
    }
};