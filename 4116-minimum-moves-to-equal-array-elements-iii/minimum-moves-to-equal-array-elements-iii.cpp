class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = *max_element(nums.begin() , nums.end());
        int count = 0;
        for(int num : nums){
            count += max - num;
        }
        return count;
    }
};