class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxlength = 1;
        int currentlength = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > nums[i-1]){
                currentlength++;
            }
            else{
                currentlength = 1;
            }
            maxlength = max(maxlength , currentlength);
        }
        return maxlength;
    }
};