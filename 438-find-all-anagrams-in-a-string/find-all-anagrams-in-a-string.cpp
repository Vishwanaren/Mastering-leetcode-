class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n=s.length();
        int m=p.length();
        if(n<m){return {};}
        vector<int>pcount(26,0);
        vector<int>scount(26,0);
        vector<int>result;
        for(int i=0;i<m;i++){
            pcount[p[i]-'a']++;
            scount[s[i]-'a']++;
        }
        if(scount==pcount){result.push_back(0);}
        for(int i=m;i<n;i++){
            scount[s[i]-'a']++;
            scount[s[i-m]-'a']--;
            if(scount==pcount){
                result.push_back(i-m+1);
            }
        }
        return result;
    }
};