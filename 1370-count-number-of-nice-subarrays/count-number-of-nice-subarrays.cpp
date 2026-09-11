class Solution {
public:
    int atmost(vector<int>& nums, int k){
        if(k<0)return 0;
        int l = 0;
        int oddcnt = 0;
        int count = 0;
        for(int r = 0 ; r < nums.size() ; r++){
            if(nums[r] % 2 != 0){
                oddcnt++;
            }
            while(oddcnt > k){
                if(nums[l] % 2 != 0){
                    oddcnt--;
                }
                l++;
            }
            count += (r-l+1);
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
    }
};