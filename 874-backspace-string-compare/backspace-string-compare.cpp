class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ress = "";
        string rest = "";
        for(char ch : s){
            if(ch != '#'){
                ress.push_back(ch);
            }
            else if(!ress.empty()){
                ress.pop_back();
            }
        }
        for(char ch : t){
            if(ch != '#'){
                rest.push_back(ch);
            }
            else if(!rest.empty()){
                rest.pop_back();
            }
        }
        return ress == rest;
    }
};