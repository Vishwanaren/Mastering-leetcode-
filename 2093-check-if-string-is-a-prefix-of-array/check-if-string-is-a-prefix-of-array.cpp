class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string current = "";
        for(const string& str:words){
            current += str;
            if(current == s){
                return true;
            }
            if(current.length()>s.length()){return false;}
        }
        return false;
    }
};