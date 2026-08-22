class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        vector<vector<int>> result;
        int mindiff = INT_MAX;
        for(int i = 0 ; i < arr.size()-1 ; i++){
            int diff = arr[i+1] - arr[i];
            if(diff < mindiff){
                mindiff = diff;
                result.clear();
                result.push_back({arr[i] , arr[i+1]});
            }
            else if(diff == mindiff){
                result.push_back({arr[i] , arr[i+1]});
            }
        }
        return result;
    }
};