class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int left=0;
        int count=0;
        for(int i=1;i<(int)nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                if(((nums[i]>nums[left])&&(nums[i]>nums[i+1]))||
                ((nums[i]<nums[left])&&(nums[i]<nums[i+1]))){
                    count++;
                }
                left=i;
            }
        }
        return count;
    }
};