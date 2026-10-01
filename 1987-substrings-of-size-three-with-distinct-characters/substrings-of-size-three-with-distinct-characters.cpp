class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>map;
        int count = 0;
        int l=0;
        for(int r=0;r<s.length();r++){
            map[s[r]]++;
            if(r-l+1>3){
                map[s[l]]--;
                if(map[s[l]]==0){
                    map.erase(s[l]);
                }
                l++;
            }
            if(map.size()==3){
                count++;
            }
        }
        return count;
    }
};