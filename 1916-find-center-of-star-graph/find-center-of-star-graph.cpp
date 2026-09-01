class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int u1 = edges[0][0];
        int v1 = edges[0][1];
        if(u1 == edges[1][0] || u1 == edges[1][1]){
            return u1;
        }
        return v1;
    }
};