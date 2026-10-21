class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>seen(s.begin(),s.end());
        for(char i='Z';i>='A';i--){
            if(seen.count(i) && seen.count(tolower(i))){
                return string(1,i);
            }
        }
        return "";
    }
};