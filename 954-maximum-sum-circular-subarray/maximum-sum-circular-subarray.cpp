class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax=0;
        int maxkadane=nums[0];
        int currmin=0;
        int minkadane=nums[0];
        int total=0;
        for(int x:nums){
            total+=x;
            currmax=max(x,currmax+x);
            maxkadane=max(currmax,maxkadane);
            currmin=min(x,currmin+x);
            minkadane=min(currmin,minkadane);
        }
        if(maxkadane<0){
            return maxkadane;
        }
        return max(maxkadane,total-minkadane);
    }
};