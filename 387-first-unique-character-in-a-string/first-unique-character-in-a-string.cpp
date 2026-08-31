class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> res;
        for(char ch : s){
            res[ch]++;
        }
        for(int i = 0 ; i < s.length() ; i++){
            if(res[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};