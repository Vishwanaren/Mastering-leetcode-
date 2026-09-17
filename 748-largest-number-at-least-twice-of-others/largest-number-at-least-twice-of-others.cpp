class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int max1 = -1;
        int maxind = -1;
        int max2 = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > max1){
                max1 = nums[i];
                maxind = i;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > max2 && nums[i] < max1){
                max2 = nums[i];
            }
        }
        if(nums[maxind] >= max2*2){
            return maxind;
        }
        return -1;
    }
};