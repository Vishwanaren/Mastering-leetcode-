class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int cnt=0;
        for(int i=0;i<arr.size()-m;i++){
            if(arr[i]==arr[i+m]){cnt++;}
            else if(arr[i]!=arr[i+m]){cnt=0;}
            if(cnt==(k-1)*m){
                return true;
            }
        }
        return false;
    }
};