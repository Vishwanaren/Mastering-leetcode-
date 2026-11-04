class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int,int>map;
        for(int i=0;i<t.size();i++){
            map[t[i]]++;
        }
        int count=t.length();
        int left=0;
        int minlen=INT_MAX;
        int minstart=0;
        for(int right=0;right<s.length();right++){
            char rchar=s[right];
            if(map.count(rchar)){
                if(map[rchar]>0){count--;}
                 map[rchar]--;
            }
            while(count==0){
                if((right-left+1)<minlen){
                minlen=right-left+1;
                minstart=left;
                }
                char lchar=s[left];
                if(map.count(lchar)){
                    map[lchar]++;
                    if(map[lchar]>0){count++;}
                }
                left++;
            }
        }
        return minlen == INT_MAX ? "" : s.substr(minstart,minlen);
    }
};