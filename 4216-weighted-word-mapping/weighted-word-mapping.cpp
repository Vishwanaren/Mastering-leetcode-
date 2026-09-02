class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;
        for(int i = 0 ; i < words.size() ; i++){
            int weight = 0;
            for(char ch : words[i]){
                weight += weights[ch - 'a'];
            }
            int modulo = weight % 26;
            result.push_back('z' - modulo);
        }
        return result;
    }
};