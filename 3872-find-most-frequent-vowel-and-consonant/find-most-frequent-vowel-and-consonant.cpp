class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char , int> freq;
        for(char ch : s){
            freq[ch]++;
        }
        int maxvowel = 0;
        int maxcon = 0;
        string vowels = "aeiou";
        for(auto pair : freq){
            int ch = pair.first;
            int count = pair.second;
            if(vowels.find(ch) != string::npos){
                maxvowel = max(maxvowel , count);
            }
            else{
                maxcon = max(maxcon , count);
            }
        }
        return maxcon + maxvowel;
    }
};