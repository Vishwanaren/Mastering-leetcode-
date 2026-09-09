class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int max_sum = 0;
        int current_sum = 0;
        unordered_set<int> map;
        for(int right = 0 ; right < nums.size() ; right++){
            while(map.count(nums[right])){
                current_sum -= nums[left];
                map.erase(nums[left]);
                left++;
            }
            map.insert(nums[right]);
            current_sum += nums[right];
            max_sum = max(max_sum , current_sum);
        }
        return max_sum;
    }
};