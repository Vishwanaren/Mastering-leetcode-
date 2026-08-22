class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int zerocount = 0;

        for(int r = 0 ; r < n ; r++){
            if(nums[r] == 0){
                zerocount++;
            }
            if(zerocount > k){
                if(nums[left] == 0){
                    zerocount--;
                }
                left++;
            }
        }
        return n - left;
    }
};