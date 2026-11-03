class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256, 0);
        int left=0;
        int maxi=0;
        for(int right=0;right<s.length();right++){
            map[s[right]]++;
            while(map[s[right]]>1){
                map[s[left]]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};