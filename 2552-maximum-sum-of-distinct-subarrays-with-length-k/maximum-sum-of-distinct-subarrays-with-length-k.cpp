class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int , int> count;
        long long max_sum = 0;
        long long windowsum = 0;

        for(int i = 0 ; i < n ; i++){
            windowsum += nums[i];
            count[nums[i]]++;

            if(i >= k){
                int out = nums[i-k];
                windowsum -= out;
                count[out]--;
                if(count[out] == 0){
                    count.erase(out);
                }
            }

            if(i >= k-1 && count.size() == k){
                max_sum = max(max_sum , windowsum);
            }
        }
        return max_sum;
    }
};