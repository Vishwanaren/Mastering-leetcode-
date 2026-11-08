class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int curr=1;
        int prev=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){curr++;}
            else{
                prev=curr;
                curr=1;
            }
            if(curr>=2*k || (curr>=k && prev>=k)){return true;}
        }
        return curr>=2*k || (curr>=k && prev>=k);
    }
};