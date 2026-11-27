class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canShip(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    bool canShip(vector<int>& weights,int capacity,int days){
        int daysUsed=1;
        int currentLoad=0;
        for(int w:weights){
            if(currentLoad+w>capacity){
                daysUsed++;
                currentLoad=w;
            }
            else{
                currentLoad+=w;
            }
        }
        return daysUsed<=days;
    }
};