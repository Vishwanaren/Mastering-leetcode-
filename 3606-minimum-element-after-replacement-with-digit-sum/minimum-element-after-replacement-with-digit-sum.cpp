class Solution {
public:
    int minElement(vector<int>& nums) {
        int small = INT_MAX;
        vector<int>sum;
        for(int i=0;i<nums.size();i++){
            int digsum = 0;
            while(nums[i]>0){
                digsum += nums[i]%10;
                nums[i] /= 10;
            }
            sum.push_back(digsum);
            if(digsum<small){small = digsum;}
        }
        return small;
    }
};