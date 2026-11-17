class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int left=0;left<n;left++){
            int currand=nums[left];
            int mini=nums[left];
            for(int right=left;right<n;right++){
                currand=currand & nums[right];
                mini = min(mini,nums[right]);
                if(mini==currand){
                    count++;
                }
            }
        }
        return count;
    }
};