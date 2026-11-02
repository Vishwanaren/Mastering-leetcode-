class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            int first=nums[i];
            int second=nums[i+1];
            int temp=second;
            int mult=1;
            while(temp>0){
                mult*=10;
                temp/=10;
            }
            mini=min(mini,(first*mult+second));
        }
        return mini;
    }
};