class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inccnt = 0;
        int deccnt = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inccnt++;
            }
            else if(nums[i]<nums[i-1]){deccnt++;}
        }
        return (inccnt == 0 || deccnt == 0);
    }
};