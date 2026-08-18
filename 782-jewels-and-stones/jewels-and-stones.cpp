class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> setjewels(jewels.begin() , jewels.end());
        int cnt = 0;
        for(char c : stones){
            if(setjewels.count(c)){
                cnt++;
            }
        }
        return cnt;
    }
};