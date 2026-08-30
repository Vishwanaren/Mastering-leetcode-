class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string , int> wordcount;
        stringstream ss(s1 + ' ' + s2);
        string word ;
        while(ss >> word){
            wordcount[word]++;
        }
        vector<string>result;
        for(auto& pair : wordcount){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};