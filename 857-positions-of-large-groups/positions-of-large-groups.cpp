class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>result;
        int start=0;
        int n=s.length();
        for(int i=0;i<=n;i++){
            if(i==n||s[start]!=s[i]){
                if(i-start>=3){
                    result.push_back({start,i-1});
                }
                start = i;
            }
        }
        return result;
    }
};