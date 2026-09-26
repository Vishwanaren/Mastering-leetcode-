class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int minfreq[26] = {0};
        for(char ch:words[0]){
            minfreq[ch - 'a']++;
        }
        for(int i=1;i<words.size();i++){
            int currfreq[26]={0};
            for(char ch:words[i]){
                currfreq[ch-'a']++;
            }
            for(int j=0;j<26;j++){
                minfreq[j] = min(minfreq[j],currfreq[j]);
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            while(minfreq[i]>0){
                ans.push_back(string(1,i+'a'));
                minfreq[i]--;
            }
        }
        return ans;
    }
};