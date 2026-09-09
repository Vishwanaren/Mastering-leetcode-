class Solution {
public:
    long long countlessorequal(vector<int>& nums ,int target){
        long long count = 0;
        int left = 0; 
        int right = nums.size()-1;
        while(left < right){
            if((long long)nums[left]+nums[right] <= target){
                count += (right - left);
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin() , nums.end());
        return countlessorequal(nums,upper) - countlessorequal(nums, (long long)lower-1);
    }
};