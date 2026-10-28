class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currsum=0;
        for(int i=0;i<k;i++){
            currsum+=nums[i];
        }
        int maxsum=currsum;
        for(int right=k;right<nums.size();right++){
            currsum+=nums[right]-nums[right-k];
            maxsum=max(maxsum,currsum);
        }
        return double(maxsum)/k;
    }
};