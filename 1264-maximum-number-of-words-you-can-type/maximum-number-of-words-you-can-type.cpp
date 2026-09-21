class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>set(brokenLetters.begin(),brokenLetters.end());
        int spaces = 0;
        int broken = 0;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                spaces++;
            }
            else if(set.count(text[i])){
                broken++;
                while(i<text.size() && text[i]!=' '){
                    i++;
                }
                if(i<text.size()){i--;}
            }
        }
        return spaces+1-broken;
    }
};