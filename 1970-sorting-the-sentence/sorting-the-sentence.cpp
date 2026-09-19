class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string>words(10);
        int totalwords = 0;
        string word;
        while(ss >> word){
            int pos = word.back() - '0';
            word.pop_back();
            words[pos]=word;
            totalwords = max(totalwords,pos);
        }
        string result = "";
        for(int i=1;i<=totalwords;i++){
            result += words[i];
            if(i<totalwords){
                result += " ";
            }
        }
        return result;
    }
};