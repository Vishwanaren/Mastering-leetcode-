class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int max=INT_MIN;
        while(l<r){
            int sum = nums[l]+nums[r];
            if(sum>max){
                max=sum;
            }
            l++;
            r--;
        }
        return max;
    }
};