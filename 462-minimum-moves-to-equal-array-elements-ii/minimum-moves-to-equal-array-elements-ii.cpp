class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            count+=abs(nums[nums.size()/2]-nums[i]);
        }
        return count;
    }
};