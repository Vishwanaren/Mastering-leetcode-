class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> paired;
        for(int i = 0 ; i < heights.size() ; i++){
            paired.push_back({heights[i] , names[i]});
        }
        sort(paired.rbegin() , paired.rend());
        vector<string> result;
        for(int i = 0 ; i < paired.size() ; i++){
            result.push_back(paired[i].second);
        }
        return result;
    }
};