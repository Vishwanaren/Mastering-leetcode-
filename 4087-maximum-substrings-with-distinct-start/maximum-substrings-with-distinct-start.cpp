class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> set;
        for(char ch : s){
            set.insert(ch);
        }
        return set.size();
    }
};