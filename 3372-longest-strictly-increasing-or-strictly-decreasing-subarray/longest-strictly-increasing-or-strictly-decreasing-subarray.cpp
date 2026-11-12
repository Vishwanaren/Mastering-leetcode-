class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inccnt=1;
        int deccnt=1;
        int maxlen=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inccnt++;
                deccnt=1;
                maxlen=max(inccnt,maxlen);
            }
            else if(nums[i]<nums[i-1]){
                deccnt++;
                inccnt=1;
                maxlen=max(deccnt,maxlen);
            }
            else{inccnt=1;
                 deccnt=1;}
        }
        return maxlen;
    }
};