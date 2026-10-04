class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        int revsum=0;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            revsum+=nums[i];
            ans.push_back(nums[i]);
            if(revsum>(sum-revsum)){
                return ans;
            }
        }
        return ans;
    }
};