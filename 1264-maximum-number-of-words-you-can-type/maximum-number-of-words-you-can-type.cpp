class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>set(brokenLetters.begin(),brokenLetters.end());
        int typablecount = 0;
        string word;
        stringstream ss(text);
        while(ss >> word){
            int broken = 0;
            for(char ch:word){
                if(set.count(ch)){
                    broken++;
                }
            }
            if(broken==0){
                typablecount++;
            }
        }
        return typablecount;
    }
};