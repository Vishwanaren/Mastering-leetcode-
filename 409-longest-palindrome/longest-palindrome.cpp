class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        int count = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        for(auto& ch:map){
            count+=(ch.second/2)*2;
        }
        if(count < n){
            count+=1;
        }
        return count;
    }
};